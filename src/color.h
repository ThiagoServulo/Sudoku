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

private:
    Rgb initial;
    Rgb fixed;
    Rgb initialHighlighted;
    Rgb fixedHighlighted;
};

#endif // COLOR_H
