#ifndef BRUSH_H
#define BRUSH_H
#include "figurageometrica.h"
#include "screen.h"
/**
 * @brief The Brush class
 * @details Esta classe serve para armazenar o caractere que deseja imprimir na figura
 */
class Brush : public FiguraGeometrica
{
private:
    char b;
public:
    Brush(char _b = ' ');
    void draw(Screen &t);
};

#endif // BRUSH_H
