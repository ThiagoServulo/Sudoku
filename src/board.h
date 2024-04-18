#ifndef BOARD_H
#define BOARD_H

#include <QLineEdit>
#include "field.h"

class Board
{
public:
    Board();
    Board(QLineEdit *line_edit_A1, QLineEdit *line_edit_A2, QLineEdit *line_edit_A3, QLineEdit *line_edit_A4,
          QLineEdit *line_edit_A5, QLineEdit *line_edit_A6, QLineEdit *line_edit_A7, QLineEdit *line_edit_A8,
          QLineEdit *line_edit_A9, QLineEdit *line_edit_B1, QLineEdit *line_edit_B2, QLineEdit *line_edit_B3,
          QLineEdit *line_edit_B4, QLineEdit *line_edit_B5, QLineEdit *line_edit_B6, QLineEdit *line_edit_B7,
          QLineEdit *line_edit_B8, QLineEdit *line_edit_B9, QLineEdit *line_edit_C1, QLineEdit *line_edit_C2,
          QLineEdit *line_edit_C3, QLineEdit *line_edit_C4, QLineEdit *line_edit_C5, QLineEdit *line_edit_C6,
          QLineEdit *line_edit_C7, QLineEdit *line_edit_C8, QLineEdit *line_edit_C9, QLineEdit *line_edit_D1,
          QLineEdit *line_edit_D2, QLineEdit *line_edit_D3, QLineEdit *line_edit_D4, QLineEdit *line_edit_D5,
          QLineEdit *line_edit_D6, QLineEdit *line_edit_D7, QLineEdit *line_edit_D8, QLineEdit *line_edit_D9,
          QLineEdit *line_edit_E1, QLineEdit *line_edit_E2, QLineEdit *line_edit_E3, QLineEdit *line_edit_E4,
          QLineEdit *line_edit_E5, QLineEdit *line_edit_E6, QLineEdit *line_edit_E7, QLineEdit *line_edit_E8,
          QLineEdit *line_edit_E9, QLineEdit *line_edit_F1, QLineEdit *line_edit_F2, QLineEdit *line_edit_F3,
          QLineEdit *line_edit_F4, QLineEdit *line_edit_F5, QLineEdit *line_edit_F6, QLineEdit *line_edit_F7,
          QLineEdit *line_edit_F8, QLineEdit *line_edit_F9, QLineEdit *line_edit_G1, QLineEdit *line_edit_G2,
          QLineEdit *line_edit_G3, QLineEdit *line_edit_G4, QLineEdit *line_edit_G5, QLineEdit *line_edit_G6,
          QLineEdit *line_edit_G7, QLineEdit *line_edit_G8, QLineEdit *line_edit_G9, QLineEdit *line_edit_H1,
          QLineEdit *line_edit_H2, QLineEdit *line_edit_H3, QLineEdit *line_edit_H4, QLineEdit *line_edit_H5,
          QLineEdit *line_edit_H6, QLineEdit *line_edit_H7, QLineEdit *line_edit_H8, QLineEdit *line_edit_H9,
          QLineEdit *line_edit_I1, QLineEdit *line_edit_I2, QLineEdit *line_edit_I3, QLineEdit *line_edit_I4,
          QLineEdit *line_edit_I5, QLineEdit *line_edit_I6, QLineEdit *line_edit_I7, QLineEdit *line_edit_I8,
          QLineEdit *line_edit_I9);
    void CheckBoardSameValues(int value, int row, int column);
    void SolveUsingBacktracking();
    void ConfigureNewGame();

private:
    Field fields[9][9];
    void CheckRowSameValues(int value, int row, int column);
    void CheckColumnSameValues(int value, int row, int column);
    void CheckQuandantSameValues(int value, int row, int column);
};

#endif // BOARD_H
