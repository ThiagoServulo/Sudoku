#ifndef SUDOKUGENERATOR_H
#define SUDOKUGENERATOR_H

#include "board.h"
#include <set>
#include <random>
#include <algorithm>

class SudokuGenerator
{
public:
    SudokuGenerator();
    void GenerateNewGame(Field fields[9][9]);

private:
    int ChooseNumberFromTheSet(std::set<int>& numbers);
    bool GenerateSudoku(Field fields[9][9], int row, int col);
    void HideCells(Field fields[9][9]);
    void CleanBoard(Field fields[9][9]);
};

#endif // SUDOKUGENERATOR_H
