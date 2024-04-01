#include "color.h"

Color::Color()
{
    initial = {255, 255, 255};
    fixed = {178, 178, 178};
    initialHighlighted = {173, 216, 253};
    fixedHighlighted = {47, 159, 242};
}

Rgb Color::GetFixedColor()
{
    return fixed;
}

Rgb Color::GetInitialColor()
{
    return initial;
}

Rgb Color::GetInitialHighlightedColor()
{
    return initialHighlighted;
}

Rgb Color::GetFixedHighlightedColor()
{
    return fixedHighlighted;
}
