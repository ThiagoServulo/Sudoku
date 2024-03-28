#include "field.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>

Field::Field()
{

}

Field::Field(QLineEdit *lineEdit, char row, int column)
{
    this->lineEdit = lineEdit;
    this->row = row;
    this->column = column;
    ConfigureField();
}

void Field::ConfigureField()
{
    // Create regex
    QRegularExpression regex("^[1-9]$");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(regex, lineEdit);
    lineEdit->setValidator(validator);

    // Set alignment
    lineEdit->setAlignment(Qt::AlignCenter);

    // Set cursos
    lineEdit->setCursor(Qt::ArrowCursor);

    // Set font
    QFont font("Arial", 12);
    font.setBold(true);
    lineEdit->setFont(font);

    ChangeColor();
    //SetToFixed();
}

void Field::SetValue(int value)
{
    lineEdit->setText(QString::number(value));
}

int Field::GetValue()
{
    return lineEdit->text().toInt();
}

void Field::ChangeColor()
{
    //lineEdit->setStyleSheet("QLineEdit { background-color: rgb(173, 216, 253); }");
//    lineEdit->setStyleSheet("QLineEdit { background-color: rgb(47, 159, 242); }");
    lineEdit->setStyleSheet("QLineEdit { background-color: rgb(178, 178, 178); }");
}

void Field::SetToFixed()
{
    SetValue(5);
    lineEdit->setEnabled(false);
    lineEdit->setStyleSheet("QLineEdit { background-color: rgb(178, 178, 178); }");
}

char Field::GetRow()
{
    return row;
}

int Field::GetColumn()
{
    return column;
}
