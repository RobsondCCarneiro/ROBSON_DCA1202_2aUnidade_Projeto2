#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Reta class
 * @details A classe herda metodos da FiguraGeometrica, ponto ha um algoritmo especial que imprime na tela de forma que nao eh totalmente reta de pixel a pixel
 */
class Reta : public FiguraGeometrica{
private:
    int xi,yi,xf,yf;
public:
    Reta(int _xi=0, int _yi=0, int _xf=0, int _yf=0);
    void draw(Screen &t);
};

#endif // RETA_H
