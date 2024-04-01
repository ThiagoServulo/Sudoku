#ifndef COLOR_H
#define COLOR_H

struct Rgb
{
    int red;
    int green;
    int blue;
};

class Color
{
public:
    Color();
    Rgb GetFixedColor();
    Rgb GetInitialColor();
    Rgb GetInitialHighlightedColor();
    Rgb GetFixedHighlightedColor();

private:
    Rgb initial;
    Rgb fixed;
    Rgb initialHighlighted;
    Rgb fixedHighlighted;
};

#endif // COLOR_H
