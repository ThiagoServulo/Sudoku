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
    void HighlightField();
    void SetToFixed();
    void OvershadowField();

private:
    QLineEdit *lineEdit;
    int value;
};

#endif // FIELD_H
