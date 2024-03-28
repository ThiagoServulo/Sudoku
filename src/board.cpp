#include "board.h"

Board::Board(QLineEdit *line_edit_A1, QLineEdit *line_edit_A2, QLineEdit *line_edit_A3, QLineEdit *line_edit_A4,
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
             QLineEdit *line_edit_I9)
{
    field_A1 = Field(line_edit_A1, 'A', 1);
    field_A2 = Field(line_edit_A2, 'A', 2);
    field_A3 = Field(line_edit_A3, 'A', 3);
    field_A4 = Field(line_edit_A4, 'A', 4);
    field_A5 = Field(line_edit_A5, 'A', 5);
    field_A6 = Field(line_edit_A6, 'A', 6);
    field_A7 = Field(line_edit_A7, 'A', 7);
    field_A8 = Field(line_edit_A8, 'A', 8);
    field_A9 = Field(line_edit_A9, 'A', 9);

    field_B1 = Field(line_edit_B1, 'B', 1);
    field_B2 = Field(line_edit_B2, 'B', 2);
    field_B3 = Field(line_edit_B3, 'B', 3);
    field_B4 = Field(line_edit_B4, 'B', 4);
    field_B5 = Field(line_edit_B5, 'B', 5);
    field_B6 = Field(line_edit_B6, 'B', 6);
    field_B7 = Field(line_edit_B7, 'B', 7);
    field_B8 = Field(line_edit_B8, 'B', 8);
    field_B9 = Field(line_edit_B9, 'B', 9);

    field_C1 = Field(line_edit_C1, 'C', 1);
    field_C2 = Field(line_edit_C2, 'C', 2);
    field_C3 = Field(line_edit_C3, 'C', 3);
    field_C4 = Field(line_edit_C4, 'C', 4);
    field_C5 = Field(line_edit_C5, 'C', 5);
    field_C6 = Field(line_edit_C6, 'C', 6);
    field_C7 = Field(line_edit_C7, 'C', 7);
    field_C8 = Field(line_edit_C8, 'C', 8);
    field_C9 = Field(line_edit_C9, 'C', 9);

    field_D1 = Field(line_edit_D1, 'D', 1);
    field_D2 = Field(line_edit_D2, 'D', 2);
    field_D3 = Field(line_edit_D3, 'D', 3);
    field_D4 = Field(line_edit_D4, 'D', 4);
    field_D5 = Field(line_edit_D5, 'D', 5);
    field_D6 = Field(line_edit_D6, 'D', 6);
    field_D7 = Field(line_edit_D7, 'D', 7);
    field_D8 = Field(line_edit_D8, 'D', 8);
    field_D9 = Field(line_edit_D9, 'D', 9);

    field_E1 = Field(line_edit_E1, 'E', 1);
    field_E2 = Field(line_edit_E2, 'E', 2);
    field_E3 = Field(line_edit_E3, 'E', 3);
    field_E4 = Field(line_edit_E4, 'E', 4);
    field_E5 = Field(line_edit_E5, 'E', 5);
    field_E6 = Field(line_edit_E6, 'E', 6);
    field_E7 = Field(line_edit_E7, 'E', 7);
    field_E8 = Field(line_edit_E8, 'E', 8);
    field_E9 = Field(line_edit_E9, 'E', 9);

    field_F1 = Field(line_edit_F1, 'F', 1);
    field_F2 = Field(line_edit_F2, 'F', 2);
    field_F3 = Field(line_edit_F3, 'F', 3);
    field_F4 = Field(line_edit_F4, 'F', 4);
    field_F5 = Field(line_edit_F5, 'F', 5);
    field_F6 = Field(line_edit_F6, 'F', 6);
    field_F7 = Field(line_edit_F7, 'F', 7);
    field_F8 = Field(line_edit_F8, 'F', 8);
    field_F9 = Field(line_edit_F9, 'F', 9);

    field_G1 = Field(line_edit_G1, 'G', 1);
    field_G2 = Field(line_edit_G2, 'G', 2);
    field_G3 = Field(line_edit_G3, 'G', 3);
    field_G4 = Field(line_edit_G4, 'G', 4);
    field_G5 = Field(line_edit_G5, 'G', 5);
    field_G6 = Field(line_edit_G6, 'G', 6);
    field_G7 = Field(line_edit_G7, 'G', 7);
    field_G8 = Field(line_edit_G8, 'G', 8);
    field_G9 = Field(line_edit_G9, 'G', 9);

    field_H1 = Field(line_edit_H1, 'H', 1);
    field_H2 = Field(line_edit_H2, 'H', 2);
    field_H3 = Field(line_edit_H3, 'H', 3);
    field_H4 = Field(line_edit_H4, 'H', 4);
    field_H5 = Field(line_edit_H5, 'H', 5);
    field_H6 = Field(line_edit_H6, 'H', 6);
    field_H7 = Field(line_edit_H7, 'H', 7);
    field_H8 = Field(line_edit_H8, 'H', 8);
    field_H9 = Field(line_edit_H9, 'H', 9);

    field_I1 = Field(line_edit_I1, 'I', 1);
    field_I2 = Field(line_edit_I2, 'I', 2);
    field_I3 = Field(line_edit_I3, 'I', 3);
    field_I4 = Field(line_edit_I4, 'I', 4);
    field_I5 = Field(line_edit_I5, 'I', 5);
    field_I6 = Field(line_edit_I6, 'I', 6);
    field_I7 = Field(line_edit_I7, 'I', 7);
    field_I8 = Field(line_edit_I8, 'I', 8);
    field_I9 = Field(line_edit_I9, 'I', 9);
}
