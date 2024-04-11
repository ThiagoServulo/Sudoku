#include "sudokubacktrackingsolver.h"
#include <QThread>
#include <QCoreApplication>

SudokuBacktrackingSolver::SudokuBacktrackingSolver()
{

}

void SudokuBacktrackingSolver::BacktrackingSolver(Field fields[9][9], int initialRow, int initialColumn)
{
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
                    fields[row][column].SetValue(number);

                    // Force GUI update
                    QCoreApplication::processEvents();
                    QThread::msleep(10);

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
                    if (IsCompleted(fields))
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
    return RowIsSafe(value, row, fields) &&
           ColumnIsSafe(value, column, fields) &&
           QuadrantIsSafe(value, row, column, fields);
}

bool SudokuBacktrackingSolver::RowIsSafe(int value, int row, Field fields[9][9])
{
    for (int column = 0; column < 9; column++)
    {
        // Check if the value already exists in the row
        if (fields[row][column].GetValue() == value)
        {
            // Value is not safe in the row
            return false;
        }
    }

    // Value is safe in the row
    return true;
}

bool SudokuBacktrackingSolver::ColumnIsSafe(int value, int column, Field fields[9][9])
{
    for (int row = 0; row < 9; row++)
    {
        // Check if the value already exists in the column
        if (fields[row][column].GetValue() == value)
        {
            // Value is not safe in the column
            return false;
        }
    }

    // Value is safe in the column
    return true;
}


bool SudokuBacktrackingSolver::QuadrantIsSafe(int value, int row, int column, Field fields[9][9])
{
    // Calculate the start row and column of the quadrant
    int startRow = row - row % 3;
    int startCol = column - column % 3;

    for (int i = startRow; i < startRow + 3; i++)
    {
        for (int j = startCol; j < startCol + 3; j++)
        {
            // Check if the value already exists in the quadrant
            if (fields[i][j].GetValue() == value)
            {
                // Value is not safe in the quadrant
                return false;
            }
        }
    }

    // Value is safe in the quadrant
    return true;
}


bool SudokuBacktrackingSolver::IsCompleted(Field fields[9][9])
{
    for (int row = 0; row < 9; row++)
    {
        for (int column = 0; column < 9; column++)
        {
            // Check if the value of the current field is zero
            if (fields[row][column].GetValue() == 0)
            {
                // Sudoku is not completed
                return false;
            }
        }
    }

    // Sudoku is completed
    return true;
}

