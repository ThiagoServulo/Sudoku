#include "sudokuwindow.h"
#include "ui_sudokuwindow.h"

SudokuWindow::SudokuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SudokuWindow)
{
    ui->setupUi(this);

    board = Board(ui->lineEdit_A1, ui->lineEdit_A2, ui->lineEdit_A3, ui->lineEdit_A4, ui->lineEdit_A5, ui->lineEdit_A6,
                  ui->lineEdit_A7, ui->lineEdit_A8, ui->lineEdit_A9, ui->lineEdit_B1, ui->lineEdit_B2, ui->lineEdit_B3,
                  ui->lineEdit_B4, ui->lineEdit_B5, ui->lineEdit_B6, ui->lineEdit_B7, ui->lineEdit_B8, ui->lineEdit_B9,
                  ui->lineEdit_C1, ui->lineEdit_C2, ui->lineEdit_C3, ui->lineEdit_C4, ui->lineEdit_C5, ui->lineEdit_C6,
                  ui->lineEdit_C7, ui->lineEdit_C8, ui->lineEdit_C9, ui->lineEdit_D1, ui->lineEdit_D2, ui->lineEdit_D3,
                  ui->lineEdit_D4, ui->lineEdit_D5, ui->lineEdit_D6, ui->lineEdit_D7, ui->lineEdit_D8, ui->lineEdit_D9,
                  ui->lineEdit_E1, ui->lineEdit_E2, ui->lineEdit_E3, ui->lineEdit_E4, ui->lineEdit_E5, ui->lineEdit_E6,
                  ui->lineEdit_E7, ui->lineEdit_E8, ui->lineEdit_E9, ui->lineEdit_F1, ui->lineEdit_F2, ui->lineEdit_F3,
                  ui->lineEdit_F4, ui->lineEdit_F5, ui->lineEdit_F6, ui->lineEdit_F7, ui->lineEdit_F8, ui->lineEdit_F9,
                  ui->lineEdit_G1, ui->lineEdit_G2, ui->lineEdit_G3, ui->lineEdit_G4, ui->lineEdit_G5, ui->lineEdit_G6,
                  ui->lineEdit_G7, ui->lineEdit_G8, ui->lineEdit_G9, ui->lineEdit_H1, ui->lineEdit_H2, ui->lineEdit_H3,
                  ui->lineEdit_H4, ui->lineEdit_H5, ui->lineEdit_H6, ui->lineEdit_H7, ui->lineEdit_H8, ui->lineEdit_H9,
                  ui->lineEdit_I1, ui->lineEdit_I2, ui->lineEdit_I3, ui->lineEdit_I4, ui->lineEdit_I5, ui->lineEdit_I6,
                  ui->lineEdit_I7, ui->lineEdit_I8, ui->lineEdit_I9);
}

SudokuWindow::~SudokuWindow()
{
    delete ui;
}


void SudokuWindow::on_lineEdit_A1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 0);
}

void SudokuWindow::on_lineEdit_A2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 1);
}

void SudokuWindow::on_lineEdit_A3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 2);
}

void SudokuWindow::on_lineEdit_A4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 3);
}

void SudokuWindow::on_lineEdit_A5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 4);
}

void SudokuWindow::on_lineEdit_A6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 5);
}

void SudokuWindow::on_lineEdit_A7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 6);
}

void SudokuWindow::on_lineEdit_A8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 7);
}

void SudokuWindow::on_lineEdit_A9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 0, 8);
}

void SudokuWindow::on_lineEdit_B1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 0);
}

void SudokuWindow::on_lineEdit_B2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 1);
}

void SudokuWindow::on_lineEdit_B3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 2);
}

void SudokuWindow::on_lineEdit_B4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 3);
}

void SudokuWindow::on_lineEdit_B5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 4);
}

void SudokuWindow::on_lineEdit_B6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 5);
}

void SudokuWindow::on_lineEdit_B7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 6);
}

void SudokuWindow::on_lineEdit_B8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 7);
}

void SudokuWindow::on_lineEdit_B9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 1, 8);
}

void SudokuWindow::on_lineEdit_C1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 0);
}

void SudokuWindow::on_lineEdit_C2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 1);
}

void SudokuWindow::on_lineEdit_C3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 2);
}

void SudokuWindow::on_lineEdit_C4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 3);
}

void SudokuWindow::on_lineEdit_C5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 4);
}

void SudokuWindow::on_lineEdit_C6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 5);
}

void SudokuWindow::on_lineEdit_C7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 6);
}

void SudokuWindow::on_lineEdit_C8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 7);
}

void SudokuWindow::on_lineEdit_C9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 2, 8);
}

void SudokuWindow::on_lineEdit_D1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 0);
}

void SudokuWindow::on_lineEdit_D2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 1);
}

void SudokuWindow::on_lineEdit_D3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 2);
}

void SudokuWindow::on_lineEdit_D4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 3);
}

void SudokuWindow::on_lineEdit_D5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 4);
}

void SudokuWindow::on_lineEdit_D6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 5);
}

void SudokuWindow::on_lineEdit_D7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 6);
}

void SudokuWindow::on_lineEdit_D8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 7);
}

void SudokuWindow::on_lineEdit_D9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 3, 8);
}

void SudokuWindow::on_lineEdit_E1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 0);
}

void SudokuWindow::on_lineEdit_E2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 1);
}

void SudokuWindow::on_lineEdit_E3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 2);
}

void SudokuWindow::on_lineEdit_E4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 3);
}

void SudokuWindow::on_lineEdit_E5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 4);
}

void SudokuWindow::on_lineEdit_E6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 5);
}

void SudokuWindow::on_lineEdit_E7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 6);
}

void SudokuWindow::on_lineEdit_E8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 7);
}

void SudokuWindow::on_lineEdit_E9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 4, 8);
}

void SudokuWindow::on_lineEdit_F1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 0);
}

void SudokuWindow::on_lineEdit_F2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 1);
}

void SudokuWindow::on_lineEdit_F3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 2);
}

void SudokuWindow::on_lineEdit_F4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 3);
}

void SudokuWindow::on_lineEdit_F5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 4);
}

void SudokuWindow::on_lineEdit_F6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 5);
}

void SudokuWindow::on_lineEdit_F7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 6);
}

void SudokuWindow::on_lineEdit_F8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 7);
}

void SudokuWindow::on_lineEdit_F9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 5, 8);
}

void SudokuWindow::on_lineEdit_G1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 0);
}

void SudokuWindow::on_lineEdit_G2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 1);
}

void SudokuWindow::on_lineEdit_G3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 2);
}

void SudokuWindow::on_lineEdit_G4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 3);
}

void SudokuWindow::on_lineEdit_G5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 4);
}

void SudokuWindow::on_lineEdit_G6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 5);
}

void SudokuWindow::on_lineEdit_G7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 6);
}

void SudokuWindow::on_lineEdit_G8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 7);
}

void SudokuWindow::on_lineEdit_G9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 6, 8);
}

void SudokuWindow::on_lineEdit_H1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 0);
}

void SudokuWindow::on_lineEdit_H2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 1);
}

void SudokuWindow::on_lineEdit_H3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 2);
}

void SudokuWindow::on_lineEdit_H4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 3);
}

void SudokuWindow::on_lineEdit_H5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 4);
}

void SudokuWindow::on_lineEdit_H6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 5);
}

void SudokuWindow::on_lineEdit_H7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 6);
}

void SudokuWindow::on_lineEdit_H8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 7);
}

void SudokuWindow::on_lineEdit_H9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 7, 8);
}

void SudokuWindow::on_lineEdit_I1_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 0);
}

void SudokuWindow::on_lineEdit_I2_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 1);
}

void SudokuWindow::on_lineEdit_I3_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 2);
}

void SudokuWindow::on_lineEdit_I4_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 3);
}

void SudokuWindow::on_lineEdit_I5_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 4);
}

void SudokuWindow::on_lineEdit_I6_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 5);
}

void SudokuWindow::on_lineEdit_I7_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 6);
}

void SudokuWindow::on_lineEdit_I8_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 7);
}

void SudokuWindow::on_lineEdit_I9_textChanged(const QString &arg1)
{
    board.CheckBoardSameValues(arg1.toInt(), 8, 8);
}
