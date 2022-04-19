#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "Forme.h"
#include "Rectangle.h"

#ifndef RECTANGLES_H_
#define RECTANGLES_H_



class RectangleS : public Rectangle{
    public :
    //Attributs

    //Méthodes
    RectangleS();
    RectangleS(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur, int _longueur, int _z);
    ~RectangleS();
    void draw(CImage *image);
};

#endif /*RECTANGLES_H_*/