#ifndef FIELD_H
#define FIELD_H
#include <QLineEdit>

class Field
{
public:
    Field(QLineEdit *line_edit);
    void ConfigureField();
    void SetValue(int value);
    int GetValue();
    void ChangeColor();
    void SetToFixed();
    void handleLineEditClick();

private:
    QLineEdit *lineEdit;
};

#endif // FIELD_H
