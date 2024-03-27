#include "sudokuwindow.h"
#include "ui_sudokuwindow.h"
#include "src/field.h"

SudokuWindow::SudokuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SudokuWindow)
{
    ui->setupUi(this);

    Field field_A1(ui->lineEdit_A1);
    Field field_A2(ui->lineEdit_A2);
    Field field_A3(ui->lineEdit_A3);
}

SudokuWindow::~SudokuWindow()
{
    delete ui;
}


void SudokuWindow::on_lineEdit_A1_textChanged(const QString &arg1)
{
    qDebug() << "aa";
}

