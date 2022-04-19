#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "Cercle.h"

#ifndef CERCLES_H_
#define CERCLES_H_



class CercleS : public Cercle{
    public :
    //Attributs

    //Méthodes
    CercleS();
    CercleS(int _R, int _G, int _B, int _transparence, int _x, int _y, int _rayon, int _z);
    ~CercleS();
    void draw(CImage *image);
};

#endif /*CERCLES_H_*/