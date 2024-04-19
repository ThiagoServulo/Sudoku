#ifndef SUDOKUBACKTRACKINGSOLVER_H
#define SUDOKUBACKTRACKINGSOLVER_H

#include "sudokuutilities.h"
#include "field.h"

class SudokuBacktrackingSolver
{
public:
    SudokuBacktrackingSolver();
    void BacktrackingSolver(Field fields[9][9], int initialRow, int initialColumn);
};

#endif // SUDOKUBACKTRACKINGSOLVER_H
