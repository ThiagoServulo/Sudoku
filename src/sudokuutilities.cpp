#include "sudokuutilities.h"

SudokuUtilities::SudokuUtilities()
{

}

int SudokuUtilities::NumberOfEqualValuesInTheQuadrant(int value, int row, int column, Field fields[9][9])
{
    int quantity = 0;

    // Calculate the starting row and column of the quadrant
    int startRow = row - row % 3;
    int startCol = column - column % 3;
    int endRow = startRow + 2;
    int endCol = startCol + 2;

    // Iterate over each row in the quadrant
    for (int i = startRow; i <= endRow; i++)
    {
        // Skip the current row to avoid counting the value in the same row
        if (i == row)
        {
            continue;
        }

        // Iterate over each column in the quadrant
        for (int j = startCol; j <= endCol; j++)
        {
            // Skip the current column to avoid counting the value in the same column
            if (j == column)
            {
                continue;
            }

            // Check if the value in the current field equals the specified value
            if (fields[i][j].GetValue() == value)
            {
                ++quantity;
            }
        }
    }

    return quantity;
}

int SudokuUtilities::NumberOfEqualValuesInTheColumn(int value, int row, int column, Field fields[9][9])
{
    int quantity = 0;

    // Iterate over each row in the column
    for(int i = 0; i < 9; i++)
    {
        // Skip the current row to avoid counting the value in the same row
        if(row == i)
        {
            continue;
        }

        // Check if the value in the current field of the column equals the specified value
        if(fields[i][column].GetValue() == value)
        {
            ++quantity;
        }
    }

    return quantity;
}

int SudokuUtilities::NumberOfEqualValuesInTheRow(int value, int row, int column, Field fields[9][9])
{
    int quantity = 0;

    // Iterate over each column in the row
    for(int i = 0; i < 9; i++)
    {
        // Skip the current column to avoid counting the value in the same column
        if(i == column)
        {
            continue;
        }

        // Check if the value in the current field of the row equals the specified value
        if(fields[row][i].GetValue() == value)
        {
            ++quantity;
        }
    }

    return quantity;
}

int SudokuUtilities::NumberOfEqualValues(int value, int row, int column, Field fields[9][9])
{
    // Check equal values in rows, columns and quadrants
    return NumberOfEqualValuesInTheRow(value, row, column, fields) +
           NumberOfEqualValuesInTheColumn(value, row, column, fields) +
           NumberOfEqualValuesInTheQuadrant(value, row, column, fields);
}

bool SudokuUtilities::IsCompleted(Field fields[9][9])
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

            // Check if the values are corrected
            if(NumberOfEqualValues(fields[row][column].GetValue(), row, column, fields) > 1)
            {
                // Sudoku is not finished correctly
                return false;
            }
        }
    }

    // Sudoku is completed
    return true;
}

bool SudokuUtilities::IsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the value is safe in the row, column, and quadrant
    return RowIsSafe(value, row, column, fields) &&
           ColumnIsSafe(value, row, column, fields) &&
           QuadrantIsSafe(value, row, column, fields);
}

bool SudokuUtilities::RowIsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the row is safe
    return !NumberOfEqualValuesInTheRow(value, row, column, fields);
}

bool SudokuUtilities::ColumnIsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the column is safe
    return !NumberOfEqualValuesInTheColumn(value, row, column, fields);
}

bool SudokuUtilities::QuadrantIsSafe(int value, int row, int column, Field fields[9][9])
{
    // Check if the quadrant is safe
    return !NumberOfEqualValuesInTheQuadrant(value, row, column, fields);
}
