#ifndef SUDOKUGENERATOR_H
#define SUDOKUGENERATOR_H

#include <set>
#include "board.h"
#include <algorithm>
#include <random>

class SudokuGenerator
{
public:
    SudokuGenerator();
    void GenerateNewGame(int board[9][9]);

private:
    int ChooseNumberFromTheSet(std::set<int>& numbers);
    bool GenerateSudoku(int board[9][9], int row, int col);
    bool IsSafe(int value, int row, int column, int board[9][9]);
    bool RowIsSafe(int value, int row, int board[9][9]);
    bool ColumnIsSafe(int value, int column, int board[9][9]);
    bool QuadrantIsSafe(int value, int row, int column, int board[9][9]);
    void ShuffleBoard(int board[9][9], std::mt19937& gen);
};

#endif // SUDOKUGENERATOR_H
