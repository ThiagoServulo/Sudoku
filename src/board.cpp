#include "board.h"
#include "field.h"

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
    Field field_A1(line_edit_A1, 'A', 1);
    Field field_A2(line_edit_A2, 'A', 2);
    Field field_A3(line_edit_A3, 'A', 3);
    Field field_A4(line_edit_A4, 'A', 4);
    Field field_A5(line_edit_A5, 'A', 5);
    Field field_A6(line_edit_A6, 'A', 6);
    Field field_A7(line_edit_A7, 'A', 7);
    Field field_A8(line_edit_A8, 'A', 8);
    Field field_A9(line_edit_A9, 'A', 9);

    Field field_B1(line_edit_B1, 'B', 1);
    Field field_B2(line_edit_B2, 'B', 2);
    Field field_B3(line_edit_B3, 'B', 3);
    Field field_B4(line_edit_B4, 'B', 4);
    Field field_B5(line_edit_B5, 'B', 5);
    Field field_B6(line_edit_B6, 'B', 6);
    Field field_B7(line_edit_B7, 'B', 7);
    Field field_B8(line_edit_B8, 'B', 8);
    Field field_B9(line_edit_B9, 'B', 9);

    Field field_C1(line_edit_C1, 'C', 1);
    Field field_C2(line_edit_C2, 'C', 2);
    Field field_C3(line_edit_C3, 'C', 3);
    Field field_C4(line_edit_C4, 'C', 4);
    Field field_C5(line_edit_C5, 'C', 5);
    Field field_C6(line_edit_C6, 'C', 6);
    Field field_C7(line_edit_C7, 'C', 7);
    Field field_C8(line_edit_C8, 'C', 8);
    Field field_C9(line_edit_C9, 'C', 9);

    Field field_D1(line_edit_D1, 'D', 1);
    Field field_D2(line_edit_D2, 'D', 2);
    Field field_D3(line_edit_D3, 'D', 3);
    Field field_D4(line_edit_D4, 'D', 4);
    Field field_D5(line_edit_D5, 'D', 5);
    Field field_D6(line_edit_D6, 'D', 6);
    Field field_D7(line_edit_D7, 'D', 7);
    Field field_D8(line_edit_D8, 'D', 8);
    Field field_D9(line_edit_D9, 'D', 9);

    Field field_E1(line_edit_E1, 'E', 1);
    Field field_E2(line_edit_E2, 'E', 2);
    Field field_E3(line_edit_E3, 'E', 3);
    Field field_E4(line_edit_E4, 'E', 4);
    Field field_E5(line_edit_E5, 'E', 5);
    Field field_E6(line_edit_E6, 'E', 6);
    Field field_E7(line_edit_E7, 'E', 7);
    Field field_E8(line_edit_E8, 'E', 8);
    Field field_E9(line_edit_E9, 'E', 9);

    Field field_F1(line_edit_F1, 'F', 1);
    Field field_F2(line_edit_F2, 'F', 2);
    Field field_F3(line_edit_F3, 'F', 3);
    Field field_F4(line_edit_F4, 'F', 4);
    Field field_F5(line_edit_F5, 'F', 5);
    Field field_F6(line_edit_F6, 'F', 6);
    Field field_F7(line_edit_F7, 'F', 7);
    Field field_F8(line_edit_F8, 'F', 8);
    Field field_F9(line_edit_F9, 'F', 9);

    Field field_G1(line_edit_G1, 'G', 1);
    Field field_G2(line_edit_G2, 'G', 2);
    Field field_G3(line_edit_G3, 'G', 3);
    Field field_G4(line_edit_G4, 'G', 4);
    Field field_G5(line_edit_G5, 'G', 5);
    Field field_G6(line_edit_G6, 'G', 6);
    Field field_G7(line_edit_G7, 'G', 7);
    Field field_G8(line_edit_G8, 'G', 8);
    Field field_G9(line_edit_G9, 'G', 9);

    Field field_H1(line_edit_H1, 'H', 1);
    Field field_H2(line_edit_H2, 'H', 2);
    Field field_H3(line_edit_H3, 'H', 3);
    Field field_H4(line_edit_H4, 'H', 4);
    Field field_H5(line_edit_H5, 'H', 5);
    Field field_H6(line_edit_H6, 'H', 6);
    Field field_H7(line_edit_H7, 'H', 7);
    Field field_H8(line_edit_H8, 'H', 8);
    Field field_H9(line_edit_H9, 'H', 9);

    Field field_I1(line_edit_I1, 'I', 1);
    Field field_I2(line_edit_I2, 'I', 2);
    Field field_I3(line_edit_I3, 'I', 3);
    Field field_I4(line_edit_I4, 'I', 4);
    Field field_I5(line_edit_I5, 'I', 5);
    Field field_I6(line_edit_I6, 'I', 6);
    Field field_I7(line_edit_I7, 'I', 7);
    Field field_I8(line_edit_I8, 'I', 8);
    Field field_I9(line_edit_I9, 'I', 9);
}
