#ifndef SUDOKUWINDOW_H
#define SUDOKUWINDOW_H

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

private:
    Ui::SudokuWindow *ui;
};
#endif // SUDOKUWINDOW_H