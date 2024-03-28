#include "board.h"

Board::Board()
{

}

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
    fields[0][0] = Field(line_edit_A1);
    fields[0][1] = Field(line_edit_A2);
    fields[0][2] = Field(line_edit_A3);
    fields[0][3] = Field(line_edit_A4);
    fields[0][4] = Field(line_edit_A5);
    fields[0][5] = Field(line_edit_A6);
    fields[0][6] = Field(line_edit_A7);
    fields[0][7] = Field(line_edit_A8);
    fields[0][8] = Field(line_edit_A9);

    fields[1][0] = Field(line_edit_B1);
    fields[1][1] = Field(line_edit_B2);
    fields[1][2] = Field(line_edit_B3);
    fields[1][3] = Field(line_edit_B4);
    fields[1][4] = Field(line_edit_B5);
    fields[1][5] = Field(line_edit_B6);
    fields[1][6] = Field(line_edit_B7);
    fields[1][7] = Field(line_edit_B8);
    fields[1][8] = Field(line_edit_B9);

    fields[2][0] = Field(line_edit_C1);
    fields[2][1] = Field(line_edit_C2);
    fields[2][2] = Field(line_edit_C3);
    fields[2][3] = Field(line_edit_C4);
    fields[2][4] = Field(line_edit_C5);
    fields[2][5] = Field(line_edit_C6);
    fields[2][6] = Field(line_edit_C7);
    fields[2][7] = Field(line_edit_C8);
    fields[2][8] = Field(line_edit_C9);

    fields[3][0] = Field(line_edit_D1);
    fields[3][1] = Field(line_edit_D2);
    fields[3][2] = Field(line_edit_D3);
    fields[3][3] = Field(line_edit_D4);
    fields[3][4] = Field(line_edit_D5);
    fields[3][5] = Field(line_edit_D6);
    fields[3][6] = Field(line_edit_D7);
    fields[3][7] = Field(line_edit_D8);
    fields[3][8] = Field(line_edit_D9);

    fields[4][0] = Field(line_edit_E1);
    fields[4][1] = Field(line_edit_E2);
    fields[4][2] = Field(line_edit_E3);
    fields[4][3] = Field(line_edit_E4);
    fields[4][4] = Field(line_edit_E5);
    fields[4][5] = Field(line_edit_E6);
    fields[4][6] = Field(line_edit_E7);
    fields[4][7] = Field(line_edit_E8);
    fields[4][8] = Field(line_edit_E9);

    fields[5][0] = Field(line_edit_F1);
    fields[5][1] = Field(line_edit_F2);
    fields[5][2] = Field(line_edit_F3);
    fields[5][3] = Field(line_edit_F4);
    fields[5][4] = Field(line_edit_F5);
    fields[5][5] = Field(line_edit_F6);
    fields[5][6] = Field(line_edit_F7);
    fields[5][7] = Field(line_edit_F8);
    fields[5][8] = Field(line_edit_F9);

    fields[6][0] = Field(line_edit_G1);
    fields[6][1] = Field(line_edit_G2);
    fields[6][2] = Field(line_edit_G3);
    fields[6][3] = Field(line_edit_G4);
    fields[6][4] = Field(line_edit_G5);
    fields[6][5] = Field(line_edit_G6);
    fields[6][6] = Field(line_edit_G7);
    fields[6][7] = Field(line_edit_G8);
    fields[6][8] = Field(line_edit_G9);

    fields[7][0] = Field(line_edit_H1);
    fields[7][1] = Field(line_edit_H2);
    fields[7][2] = Field(line_edit_H3);
    fields[7][3] = Field(line_edit_H4);
    fields[7][4] = Field(line_edit_H5);
    fields[7][5] = Field(line_edit_H6);
    fields[7][6] = Field(line_edit_H7);
    fields[7][7] = Field(line_edit_H8);
    fields[7][8] = Field(line_edit_H9);

    fields[8][0] = Field(line_edit_I1);
    fields[8][1] = Field(line_edit_I2);
    fields[8][2] = Field(line_edit_I3);
    fields[8][3] = Field(line_edit_I4);
    fields[8][4] = Field(line_edit_I5);
    fields[8][5] = Field(line_edit_I6);
    fields[8][6] = Field(line_edit_I7);
    fields[8][7] = Field(line_edit_I8);
    fields[8][8] = Field(line_edit_I9);
}

void Board::CheckBoardSameValues(int value, int row, int column)
{
    if(value == 0)
    {
        fields[row][column].sapo();
        return;
    }
    // Check row
    for(int i = 0; i < 9; i++)
    {
        if(column == i)
        {
            continue;
        }

        if(fields[row][i].GetValue() == value)
        {
            fields[row][i].ChangeColor();
            fields[row][column].ChangeColor();
        }
    }
}

