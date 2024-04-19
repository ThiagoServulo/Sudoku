#include "sudokugenerator.h"
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

void SudokuGenerator::GenerateNewGame(int board[9][9])
{
    // Generate a valid Sudoku recursively
    if (!GenerateSudoku(board, 0, 0))
    {
        throw std::runtime_error("It was not possible to generate the Sudoku.");
    }

    // Print sudoku generated
    //PrintSudoku(board);

    // Hide cells
    HideCells(board);
}

bool SudokuGenerator::GenerateSudoku(int board[9][9], int row, int col)
{
    // If all rows have been filled, the Sudoku has been generated
    if (row == 9)
    {
        return true;
    }

    // If all columns are filled, move to the next row
    if (col == 9)
    {
        return GenerateSudoku(board, row + 1, 0);
    }

    // If the cell is already filled, move to the next column
    if (board[row][col] != 0)
    {
        return GenerateSudoku(board, row, col + 1);
    }

    // Init set numbers
    std::set<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9};
    while(!numbers.empty())
    {
        // Choose a random number
        int value = ChooseNumberFromTheSet(numbers);

        // Check if the number is valid
        if(IsSafe(value, row, col, board))
        {
            board[row][col] = value;

            // Check if the Sudoku has been generated
            if (GenerateSudoku(board, row, col + 1))
            {
                // If the recursion is successful, the Sudoku has been generated
                return true;
            }

            // Otherwise, try another number.
            board[row][col] = 0;
        }

        // Remove the invalid number from the set
        numbers.erase(value);
    }

    // If no number is valid, return false
    return false;
}

bool SudokuGenerator::IsSafe(int value, int row, int column, int board[9][9])
{
    // Check if the value is valid
    return RowIsSafe(value, row, board) &&
           ColumnIsSafe(value, column, board) &&
           QuadrantIsSafe(value, row, column, board);
}

bool SudokuGenerator::RowIsSafe(int value, int row, int board[9][9])
{
    // Traverse through all columns
    for (int col = 0; col < 9; ++col)
    {
        // Check if the values are equal
        if (board[row][col] == value)
        {
            // This value cannot be used
            return false;
        }
    }

    // This value can be used
    return true;
}

bool SudokuGenerator::ColumnIsSafe(int value, int column, int board[9][9])
{
    // Traverse through all rows
    for (int row = 0; row < 9; ++row)
    {
        // Check if the values are equal
        if (board[row][column] == value)
        {
            // Check if the values are equal
            return false;
        }
    }

    // This value can be used
    return true;
}

bool SudokuGenerator::QuadrantIsSafe(int value, int row, int column, int board[9][9])
{
    // Init variables
    int startRow = row - row % 3;
    int startCol = column - column % 3;

    // Traverse through all rows
    for (int i = 0; i < 3; i++)
    {
        // Traverse through all columns
        for (int j = 0; j < 3; j++)
        {
            // Check if the values are equal
            if (board[i + startRow][j + startCol] == value)
            {
                // Check if the values are equal
                return false;
            }
        }
    }

    // This value can be used
    return true;
}

void SudokuGenerator::HideCells(int board[9][9])
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
        board[row][col] = 0;
    }
}

void SudokuGenerator::PrintSudoku(int board[9][9])
{
    // Print sudoku generated
    for(int i = 0; i < 9; i++)
    {
        QString line;
        for(int j = 0; j < 9; j++)
        {
            line += QString::number(board[i][j]) + " ";
        }
        qDebug() << line;
    }
}
