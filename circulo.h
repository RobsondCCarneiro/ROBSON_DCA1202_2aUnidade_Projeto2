#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Circulo class
 * @details Classe para imprimir os circulos
 */
class Circulo : public FiguraGeometrica
{
private:
    int x, y, raio, oct;
    bool isFilled;
public:
    Circulo(int _x, int _y, int _raio, bool _isFilled);
    void draw(Screen &t);
    void pontoCirc(int x1, int y1, Screen &t);
};

#endif // CIRCULO_H
