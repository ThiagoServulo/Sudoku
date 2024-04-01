#include "color.h"

Color::Color()
{
    fixed = {178, 178, 178};
        /*
    initial = ;
    fixed = "QLineEdit { background-color: rgb(178, 178, 178); }";
    initialHighlighted;
    fixedHighlighted;    */
}

Rgb Color::GetFixedColor()
{
    return fixed;
}
