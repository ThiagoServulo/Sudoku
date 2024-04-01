#include "field.h"
#include "src/color.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>

Field::Field()
{

}

Field::Field(QLineEdit *lineEdit)
{
    this->lineEdit = lineEdit;
    this->value = 0;
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
}

void Field::SetValue(int value)
{
    this->value = value;
    lineEdit->setText(QString::number(value));
}

int Field::GetValue()
{
    return lineEdit->text().toInt();
    //return value;
}

void Field::ChangeColor()
{
    //lineEdit->setStyleSheet("QLineEdit { background-color: rgb(173, 216, 253); }");
    //lineEdit->setStyleSheet("QLineEdit { background-color: rgb(47, 159, 242); }");
    lineEdit->setStyleSheet("QLineEdit { background-color: rgb(178, 178, 178); }");
}

void Field::SetToFixed()
{
    SetValue(5);
    lineEdit->setEnabled(false);
    lineEdit->setStyleSheet("QLineEdit { background-color: rgb(178, 178, 178); }");
}

void Field::sapo()
{
    //qDebug() << lineEdit->styleSheet().;

    //QColor backgroundColor = lineEdit->palette().color(QPalette::Base);

    Color color;
    Rgb colorRgb = color.GetFixedColor();

    // Extraindo os componentes RGB
    int red = colorRgb.red;
    int green = colorRgb.green;
    int blue = colorRgb.blue;

    qDebug() << "Red: " << red;
    qDebug() << "Green: " << green;
    qDebug() << "Blue: " << blue;
}
