#include "sudokugenerator.h"
#include "sudokuutilities.h"
#include <stdexcept>

SudokuGenerator::SudokuGenerator()
{

}

int SudokuGenerator::ChooseNumberFromTheSet(std::set<int>& numbers)
{
    // Initializing a random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Generating a random number based on the size of the set
    std::uniform_int_distribution<> dist(0, numbers.size() - 1);
    auto it = std::next(numbers.begin(), dist(gen));

    // Returning the drawn number
    return *it;
}

void SudokuGenerator::GenerateNewGame(Field fields[9][9])
{
    SudokuUtilities utilities;

    // Generate a valid Sudoku recursively
    if (!GenerateSudoku(fields, 0, 0))
    {
        throw std::runtime_error("It was not possible to generate the Sudoku.");
    }

    // Print sudoku generated
    //utilities.PrintSudoku(fields);

    // Hide cells
    HideCells(fields);
}

bool SudokuGenerator::GenerateSudoku(Field fields[9][9], int row, int col)
{
    SudokuUtilities utilities;

    // If all rows have been filled, the Sudoku has been generated
    if (row == 9)
    {
        return true;
    }

    // If all columns are filled, move to the next row
    if (col == 9)
    {
        return GenerateSudoku(fields, row + 1, 0);
    }

    // If the cell is already filled, move to the next column
    if (fields[row][col].GetValue() != 0)
    {
        return GenerateSudoku(fields, row, col + 1);
    }

    // Init set numbers
    std::set<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9};
    while (!numbers.empty())
    {
        // Choose a random number
        int value = ChooseNumberFromTheSet(numbers);

        // Check if the number is valid
        if (utilities.IsSafe(value, row, col, fields))
        {
            fields[row][col].BlockSignals();
            fields[row][col].SetToFixed(value);
            fields[row][col].UnblockSignals();

            // Check if the Sudoku has been generated
            if (GenerateSudoku(fields, row, col + 1))
            {
                // If the recursion is successful, the Sudoku has been generated
                return true;
            }

            //  Otherwise, try another number
            fields[row][col].BlockSignals();
            fields[row][col].SetValue(0);
            fields[row][col].UnblockSignals();
        }

        // Remove the invalid number from the set
        numbers.erase(value);
    }

    // If no number is valid, return false
    return false;
}

void SudokuGenerator::HideCells(Field fields[9][9])
{
    // Initialize random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 80);

    // Create a vector to store cell indices
    std::vector<int> cellsToHide(81);
    for (int i = 0; i < 81; i++)
    {
        cellsToHide[i] = i;
    }

    // Shuffle the cell indices
    std::shuffle(cellsToHide.begin(), cellsToHide.end(), gen);

    // Define the number of cells to hide
    const int numCellsToHide = 50;

    // Hide the specified number of cells
    for (int i = 0; i < numCellsToHide; i++)
    {
        // Get the index of the cell to hide
        int index = cellsToHide[i];
        int row = index / 9;
        int col = index % 9;

        // Hide the cell by setting its value to 0
        fields[row][col].BlockSignals();
        fields[row][col].SetValue(0);
        fields[row][col].SetToInitial();
        fields[row][col].UnblockSignals();
    }
}
