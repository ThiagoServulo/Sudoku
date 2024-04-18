#ifndef SUDOKUBACKTRACKINGSOLVER_H
#define SUDOKUBACKTRACKINGSOLVER_H

#include "field.h"

class SudokuBacktrackingSolver
{
public:
    SudokuBacktrackingSolver();
    void BacktrackingSolver(Field fields[9][9], int initialRow, int initialColumn);

private:
    bool IsSafe(int value, int row, int column, Field fields[9][9]);
    bool RowIsSafe(int value, int row, int column, Field fields[9][9]);
    bool ColumnIsSafe(int value, int row, int column, Field fields[9][9]);
    bool QuadrantIsSafe(int value, int row, int column, Field fields[9][9]);
};

#endif // SUDOKUBACKTRACKINGSOLVER_H
