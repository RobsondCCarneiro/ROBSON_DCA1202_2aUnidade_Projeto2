#include "reta.h"
#include "screen.h"
#include<cmath>
#include <iostream>


using namespace std;

Reta::Reta(int _xi, int _yi, int _xf, int _yf){

    xi = _xi;
    yi = _yi;
    xf = _xf;
    yf = _yf;
}
void Reta::draw(Screen &t){
    float Tamanho;
    float Delta_x;
    float Delta_y;
    float x = xi;
    float y = yi;

    // Tamanho: Aproxima o tamanho da reta
    if( abs(xf - xi) > abs(yf - yi)){
        Tamanho = abs(xf - xi);
    }else{
        Tamanho = abs(yf - yi);
    }
    //seleciona o maior dos valores entre Delta_x e Delta_y como unidade de rasterização
    Delta_x = (xf - xi)/Tamanho;
    Delta_y = (yf - yi)/Tamanho;
    int i = 1;
    while(i < Tamanho){
        //round: arredonda de um dado número real para inteiro
        t.setPixel(round(x), round(y));
        x = x + Delta_x;
        y = y + Delta_y;
        i = i + 1;
    }

}
