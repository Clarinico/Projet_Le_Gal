#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "Rectangle.h"

#ifndef CARRE_H_
#define CARRE_H_



class Carre : public Rectangle{
    public :
    //Attributs

    //Méthodes
    Carre();
    Carre(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur, int _z);
    ~Carre();
    void draw(CImage *image);
};

#endif /*CARRE_H_*/