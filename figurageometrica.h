#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"
/**
 * @brief The FiguraGeometrica class
 * @details Esta eh uma classe abstrata que tem a funcao virtual draw que serve para imprimir os pontos na tela, armazenando em um vetor
 */
class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
