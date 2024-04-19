#include "sudokubacktrackingsolver.h"
#include "sudokuutilities.h"
#include <QThread>
#include <QCoreApplication>

SudokuBacktrackingSolver::SudokuBacktrackingSolver()
{

}

void SudokuBacktrackingSolver::BacktrackingSolver(Field fields[9][9], int initialRow, int initialColumn)
{
    SudokuUtilities utilities;

    // Initialize row and column
    int row = initialRow;
    int column = initialColumn;

    // Initialize number to be inserted
    int number = 1;

    // Loop through rows and columns
    while (row < 9 && column < 9)
    {
        // Check if the current field is not fixed
        if (!fields[row][column].IsFixed())
        {
            // Loop through valid numbers
            while (number <= 9)
            {
                // Check if the current number is safe to place
                if (IsSafe(number, row, column, fields))
                {
                    // Set the value of the field
                    fields[row][column].BlockSignals();
                    fields[row][column].SetValue(number);
                    fields[row][column].UnblockSignals();

                    // Force GUI update
                    QCoreApplication::processEvents();

                    // Calculate the next row and column
                    int nextRow = row;
                    int nextColumn = column + 1;

                    // Handle column overflow
                    if (nextColumn == 9)
                    {
                        nextColumn = 0;
                        nextRow++;
                    }

                    // Recursively call the solver for the next field
                    BacktrackingSolver(fields, nextRow, nextColumn);

                    // Check if the sudoku is completed
                    if (utilities.IsCompleted(fields))
                    {
                        return;
                    }

                    // Reset the field value
                    fields[row][column].SetValue(0);
                }

                // Increment number
                number++;
            }
            return;
        }

        // Increment column
        column++;

        // Handle column overflow
        if (column == 9)
        {
            column = 0;
            row++;
        }
    }
}

bool SudokuBacktrackingSolver::IsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the value is safe in the row, column, and quadrant
    return RowIsSafe(value, row, column, fields) &&
           ColumnIsSafe(value, row, column, fields) &&
           QuadrantIsSafe(value, row, column, fields);
}

bool SudokuBacktrackingSolver::RowIsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the row is safe
    SudokuUtilities utilities;
    return !utilities.NumberOfEqualValuesInTheRow(value, row, column, fields);
}

bool SudokuBacktrackingSolver::ColumnIsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the column is safe
    SudokuUtilities utilities;
    return !utilities.NumberOfEqualValuesInTheColumn(value, row, column, fields);
}

bool SudokuBacktrackingSolver::QuadrantIsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the quadrant is safe
    SudokuUtilities utilities;
    return !utilities.NumberOfEqualValuesInTheQuadrant(value, row, column, fields);
}
