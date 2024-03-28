#ifndef FIELD_H
#define FIELD_H
#include <QLineEdit>

class Field
{
public:
    Field();
    Field(QLineEdit *lineEdit, char row, int column);
    void ConfigureField();
    void SetValue(int value);
    int GetValue();
    void ChangeColor();
    void SetToFixed();
    char GetRow();
    int GetColumn();

private:
    QLineEdit *lineEdit;
    char row;
    int column;
};

#endif // FIELD_H
