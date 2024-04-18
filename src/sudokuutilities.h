#ifndef SUDOKUUTILITIES_H
#define SUDOKUUTILITIES_H

#include "src/field.h"

class SudokuUtilities
{
public:
    SudokuUtilities();
    int NumberOfEqualValuesInTheQuadrant(int value, int row, int column, Field fields[9][9]);
    int NumberOfEqualValuesInTheColumn(int value, int row, int column, Field fields[9][9]);
    int NumberOfEqualValuesInTheRow(int value, int row, int column, Field fields[9][9]);
    int NumberOfEqualValues(int value, int row, int column, Field fields[9][9]);
    bool IsCompleted(Field fields[9][9]);
};

#endif // SUDOKUUTILITIES_H
