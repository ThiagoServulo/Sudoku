#include "sudokugenerator.h"

SudokuGenerator::SudokuGenerator()
{

}

QList<Square> SudokuGenerator::GenerateNewGame()
{
    QList<Square> squareList;

    // TODO: Create function to generate the sudoku
    squareList.append({2, 0, 1});

    return squareList;
}
