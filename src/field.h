#ifndef FIELD_H
#define FIELD_H
#include <QLineEdit>

class Field
{
public:
    Field();
    Field(QLineEdit *lineEdit);
    void ConfigureField();
    void SetValue(int value);
    int GetValue();
    void ChangeColor();
    void SetToFixed();
    void sapo();

private:
    QLineEdit *lineEdit;
};

#endif // FIELD_H
