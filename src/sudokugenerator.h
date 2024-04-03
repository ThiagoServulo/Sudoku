#ifndef SUDOKUGENERATOR_H
#define SUDOKUGENERATOR_H

#include <QList>

struct Square
{
    int value;
    int row;
    int column;
};

class SudokuGenerator
{
public:
    SudokuGenerator();
    QList<Square> GenerateNewGame();

};

#endif // SUDOKUGENERATOR_H
