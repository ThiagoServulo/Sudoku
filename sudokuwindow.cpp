#include "sudokuwindow.h"
#include "ui_sudokuwindow.h"
#include "src/field.h"
#include "src/board.h"

SudokuWindow::SudokuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SudokuWindow)
{
    ui->setupUi(this);

    Board board(ui->lineEdit_A1, ui->lineEdit_A2, ui->lineEdit_A3, ui->lineEdit_A4, ui->lineEdit_A5, ui->lineEdit_A6,
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
    qDebug() << "aa";
}

