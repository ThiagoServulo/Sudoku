#ifndef BOARD_H
#define BOARD_H

#include <QLineEdit>
#include "field.h"

class Board
{
public:
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

private:
    Field field_A1;
    Field field_A2;
    Field field_A3;
    Field field_A4;
    Field field_A5;
    Field field_A6;
    Field field_A7;
    Field field_A8;
    Field field_A9;
    Field field_B1;
    Field field_B2;
    Field field_B3;
    Field field_B4;
    Field field_B5;
    Field field_B6;
    Field field_B7;
    Field field_B8;
    Field field_B9;
    Field field_C1;
    Field field_C2;
    Field field_C3;
    Field field_C4;
    Field field_C5;
    Field field_C6;
    Field field_C7;
    Field field_C8;
    Field field_C9;
    Field field_D1;
    Field field_D2;
    Field field_D3;
    Field field_D4;
    Field field_D5;
    Field field_D6;
    Field field_D7;
    Field field_D8;
    Field field_D9;
    Field field_E1;
    Field field_E2;
    Field field_E3;
    Field field_E4;
    Field field_E5;
    Field field_E6;
    Field field_E7;
    Field field_E8;
    Field field_E9;
    Field field_F1;
    Field field_F2;
    Field field_F3;
    Field field_F4;
    Field field_F5;
    Field field_F6;
    Field field_F7;
    Field field_F8;
    Field field_F9;
    Field field_G1;
    Field field_G2;
    Field field_G3;
    Field field_G4;
    Field field_G5;
    Field field_G6;
    Field field_G7;
    Field field_G8;
    Field field_G9;
    Field field_H1;
    Field field_H2;
    Field field_H3;
    Field field_H4;
    Field field_H5;
    Field field_H6;
    Field field_H7;
    Field field_H8;
    Field field_H9;
    Field field_I1;
    Field field_I2;
    Field field_I3;
    Field field_I4;
    Field field_I5;
    Field field_I6;
    Field field_I7;
    Field field_I8;
    Field field_I9;
};

#endif // BOARD_H
