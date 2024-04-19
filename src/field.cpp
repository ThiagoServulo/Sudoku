#include "field.h"
#include "src/color.h"
#include <QString>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

#include <string>

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

    QString valueStr = (value == 0) ? "" : QString::number(value);
    lineEdit->setText(valueStr);
}

int Field::GetValue()
{
    return value;
}

void Field::HighlightField()
{
    Color color;
    Rgb colorRgb = lineEdit->isEnabled() ? color.GetInitialHighlightedColor() :
                       color.GetFixedHighlightedColor();

    QString backgroundColor = QString("rgb(%1, %2, %3)").arg(colorRgb.red).arg(colorRgb.green).arg(colorRgb.blue);
    lineEdit->setStyleSheet(QString("QLineEdit { background-color: %1; }").arg(backgroundColor));
}

void Field::SetToFixed(int value)
{
    BlockSignals();
    SetValue(value);
    lineEdit->setEnabled(false);
    OvershadowField();
    UnblockSignals();
}

bool Field::IsFixed()
{
    return !lineEdit->isEnabled();
}

void Field::SetToInitial()
{
    SetValue(0);
    lineEdit->setEnabled(true);
    OvershadowField();
}

void Field::OvershadowField()
{
    Color color;
    Rgb colorRgb = lineEdit->isEnabled() ? color.GetInitialColor() :
                       color.GetFixedColor();

    QString backgroundColor = QString("rgb(%1, %2, %3)").arg(colorRgb.red).arg(colorRgb.green).arg(colorRgb.blue);
    lineEdit->setStyleSheet(QString("QLineEdit { background-color: %1; }").arg(backgroundColor));
}

void Field::BlockSignals()
{
    lineEdit->blockSignals(true);
}

void Field::UnblockSignals()
{
    lineEdit->blockSignals(false);
}
