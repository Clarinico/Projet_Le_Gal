#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "Forme.h"

#ifndef CERCLE_H_
#define CERCLE_H_



class Cercle : public Forme{
    public :
    //Attributs
    int rayon;

    //Méthodes
    Cercle();
    Cercle(int _R, int _G, int _B, int _transparence, int _x, int _y, int _rayon, int _z);
    ~Cercle();
    void draw(CImage *image);
};

#endif /*CERCLE_H_*/