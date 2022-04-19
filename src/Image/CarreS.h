#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "RectangleS.h"

#ifndef CARRES_H_
#define CARRES_H_



class CarreS : public RectangleS{
    public :
    //Attributs

    //Méthodes
    CarreS();
    CarreS(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur, int _z);
    ~CarreS();
    void draw(CImage *image);
};

#endif /*CARRES_H_*/