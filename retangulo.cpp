#include "retangulo.h"
#include "reta.h"

Retangulo::Retangulo(int _x, int _y, int _alt, int _larg)
{
    x = _x;
    y = _y;
    alt = _alt;
    larg = _larg;
}
void Retangulo::draw(Screen &t){
    for(int i=x; i<(x+larg); i++){
        for(int j=y; j<(y+alt); j++){
            t.setPixel(i,j);
        }
    }
}
