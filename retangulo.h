#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "reta.h"

/**
 * @brief The Retangulo class
 */
class Retangulo : public FiguraGeometrica
{
private:
    int x, y, alt, larg;
    char brush;

public:
    Retangulo(int _x, int _y, int _alt, int _larg);
    void draw(Screen &t);
};

#endif // RETANGULO_H
