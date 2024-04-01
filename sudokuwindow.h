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
    void on_lineEdit_A8_textChanged(const QString &arg1);
    void on_lineEdit_A9_textChanged(const QString &arg1);
    void on_lineEdit_A7_textChanged(const QString &arg1);
    void on_lineEdit_B1_textChanged(const QString &arg1);
    void on_lineEdit_B2_textChanged(const QString &arg1);
    void on_lineEdit_B3_textChanged(const QString &arg1);
    void on_lineEdit_B4_textChanged(const QString &arg1);
    void on_lineEdit_B5_textChanged(const QString &arg1);
    void on_lineEdit_B6_textChanged(const QString &arg1);
    void on_lineEdit_B7_textChanged(const QString &arg1);
    void on_lineEdit_B8_textChanged(const QString &arg1);
    void on_lineEdit_B9_textChanged(const QString &arg1);

private:
    Ui::SudokuWindow *ui;
    Board board;
};
#endif // SUDOKUWINDOW_H
