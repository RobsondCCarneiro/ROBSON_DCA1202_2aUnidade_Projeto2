#include "circulo.h"
#include "screen.h"
#include <iostream>
#include <cmath>

using namespace std;

Circulo::Circulo(int _x, int _y, int _raio, bool _isFilled)
{
    x = _x;
    y = _y;
    raio = _raio;
    isFilled = _isFilled;
}

void Circulo::draw(Screen &t){
    if(isFilled){
        for(int i=(x-raio); i<=(x+raio); i++){
            for(int j=(y-raio); j<=(y+raio); j++){
                if((i-x)*(i-x)+(j-y)*(j-x) <= (raio*raio)){
                    t.setPixel(i,j);
                }
            }
        }
    }
    else{
        int x1 = 0;
        int y1 = 0;
        int d = 1 - raio;
        pontoCirc(x1, y1, t);
        while(y1 > x1){
            if(d<0){
                d = d + 2*x1 + 3;
                x1 = x1 + 1;
            }
            else{
                d = d + 2*(x1-y1) + 5;
                x1 = x1 + 1;
                y1 = y1 - 1;
            }
            pontoCirc(x1, y1, t);
        }
    }
}

void Circulo::pontoCirc(int x1, int y1, Screen &t){
    t.setPixel(x + x1, y + y1);
    t.setPixel(x + y1, y + x1);
    t.setPixel(x - y1, y + x1);
    t.setPixel(x - x1, y + y1);
    t.setPixel(x - x1, y - y1);
    t.setPixel(x - y1, y - x1);
    t.setPixel(x + y1, y - x1);
    t.setPixel(x + x1, y - y1);
}
