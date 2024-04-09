#ifndef SUDOKUWINDOW_H
#define SUDOKUWINDOW_H

#include "src/board.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SudokuWindow; }
QT_END_NAMESPACE

class SudokuWindow : public QMainWindow
{
    Q_OBJECT

public:
    SudokuWindow(QWidget *parent = nullptr);
    ~SudokuWindow();

private slots:
    void on_lineEdit_A1_textChanged(const QString &arg1);
    void on_lineEdit_A2_textChanged(const QString &arg1);
    void on_lineEdit_A3_textChanged(const QString &arg1);
    void on_lineEdit_A4_textChanged(const QString &arg1);
    void on_lineEdit_A5_textChanged(const QString &arg1);
    void on_lineEdit_A6_textChanged(const QString &arg1);
    void on_lineEdit_A7_textChanged(const QString &arg1);
    void on_lineEdit_A8_textChanged(const QString &arg1);
    void on_lineEdit_A9_textChanged(const QString &arg1);
    void on_lineEdit_B1_textChanged(const QString &arg1);
    void on_lineEdit_B2_textChanged(const QString &arg1);
    void on_lineEdit_B3_textChanged(const QString &arg1);
    void on_lineEdit_B4_textChanged(const QString &arg1);
    void on_lineEdit_B5_textChanged(const QString &arg1);
    void on_lineEdit_B6_textChanged(const QString &arg1);
    void on_lineEdit_B7_textChanged(const QString &arg1);
    void on_lineEdit_B8_textChanged(const QString &arg1);
    void on_lineEdit_B9_textChanged(const QString &arg1);
    void on_lineEdit_C1_textChanged(const QString &arg1);
    void on_lineEdit_C2_textChanged(const QString &arg1);
    void on_lineEdit_C3_textChanged(const QString &arg1);
    void on_lineEdit_C4_textChanged(const QString &arg1);
    void on_lineEdit_C5_textChanged(const QString &arg1);
    void on_lineEdit_C6_textChanged(const QString &arg1);
    void on_lineEdit_C7_textChanged(const QString &arg1);
    void on_lineEdit_C8_textChanged(const QString &arg1);
    void on_lineEdit_C9_textChanged(const QString &arg1);
    void on_lineEdit_D1_textChanged(const QString &arg1);
    void on_lineEdit_D2_textChanged(const QString &arg1);
    void on_lineEdit_D3_textChanged(const QString &arg1);
    void on_lineEdit_D4_textChanged(const QString &arg1);
    void on_lineEdit_D5_textChanged(const QString &arg1);
    void on_lineEdit_D6_textChanged(const QString &arg1);
    void on_lineEdit_D7_textChanged(const QString &arg1);
    void on_lineEdit_D8_textChanged(const QString &arg1);
    void on_lineEdit_D9_textChanged(const QString &arg1);
    void on_lineEdit_E1_textChanged(const QString &arg1);
    void on_lineEdit_E2_textChanged(const QString &arg1);
    void on_lineEdit_E3_textChanged(const QString &arg1);
    void on_lineEdit_E4_textChanged(const QString &arg1);
    void on_lineEdit_E5_textChanged(const QString &arg1);
    void on_lineEdit_E6_textChanged(const QString &arg1);
    void on_lineEdit_E7_textChanged(const QString &arg1);
    void on_lineEdit_E8_textChanged(const QString &arg1);
    void on_lineEdit_E9_textChanged(const QString &arg1);
    void on_lineEdit_F1_textChanged(const QString &arg1);
    void on_lineEdit_F2_textChanged(const QString &arg1);
    void on_lineEdit_F3_textChanged(const QString &arg1);
    void on_lineEdit_F4_textChanged(const QString &arg1);
    void on_lineEdit_F5_textChanged(const QString &arg1);
    void on_lineEdit_F6_textChanged(const QString &arg1);
    void on_lineEdit_F7_textChanged(const QString &arg1);
    void on_lineEdit_F8_textChanged(const QString &arg1);
    void on_lineEdit_F9_textChanged(const QString &arg1);
    void on_lineEdit_G1_textChanged(const QString &arg1);
    void on_lineEdit_G2_textChanged(const QString &arg1);
    void on_lineEdit_G3_textChanged(const QString &arg1);
    void on_lineEdit_G4_textChanged(const QString &arg1);
    void on_lineEdit_G5_textChanged(const QString &arg1);
    void on_lineEdit_G6_textChanged(const QString &arg1);
    void on_lineEdit_G7_textChanged(const QString &arg1);
    void on_lineEdit_G8_textChanged(const QString &arg1);
    void on_lineEdit_G9_textChanged(const QString &arg1);
    void on_lineEdit_H1_textChanged(const QString &arg1);
    void on_lineEdit_H2_textChanged(const QString &arg1);
    void on_lineEdit_H3_textChanged(const QString &arg1);
    void on_lineEdit_H4_textChanged(const QString &arg1);
    void on_lineEdit_H5_textChanged(const QString &arg1);
    void on_lineEdit_H6_textChanged(const QString &arg1);
    void on_lineEdit_H7_textChanged(const QString &arg1);
    void on_lineEdit_H8_textChanged(const QString &arg1);
    void on_lineEdit_H9_textChanged(const QString &arg1);
    void on_lineEdit_I1_textChanged(const QString &arg1);
    void on_lineEdit_I2_textChanged(const QString &arg1);
    void on_lineEdit_I3_textChanged(const QString &arg1);
    void on_lineEdit_I4_textChanged(const QString &arg1);
    void on_lineEdit_I5_textChanged(const QString &arg1);
    void on_lineEdit_I6_textChanged(const QString &arg1);
    void on_lineEdit_I7_textChanged(const QString &arg1);
    void on_lineEdit_I8_textChanged(const QString &arg1);
    void on_lineEdit_I9_textChanged(const QString &arg1);

    void on_pushButtonSolveUsingBacktracking_clicked();

private:
    Ui::SudokuWindow *ui;
    Board board;
};
#endif // SUDOKUWINDOW_H
