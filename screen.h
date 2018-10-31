#ifndef SCREEN_H
#define SCREEN_H

#include<vector>
#include<iostream>
#include<fstream>
#include<ostream>
using namespace std;
/**
 * @brief The Screen class
 */
class Screen{
private:
    int nlin, ncol;
    char brush;
    vector< vector<char> > mat;
public:
    //Construtor da classe Screen
    Screen(int nlin=10, int ncol=10);
    void setPixel(int x, int y);
    void clear();
    void setBrush(char _brush);
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
