#include "brush.h"
#include <iostream>
#include "screen.h"

using namespace std;
Brush::Brush(char _b)
{
    b = _b;
}
void Brush::draw(Screen &t){
    t.setBrush(b);
}
