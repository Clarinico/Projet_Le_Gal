#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "Forme.h"

#ifndef LIGNE_H_
#define LIGNE_H_



class Ligne : public Forme{
    public :
    //Attributs
    int x2;
    int y2;

    //Méthodes
    Ligne();
    Ligne(int _R, int _G, int _B, int _transparence, int _x, int _y, int _x2, int _y2);
    ~Ligne();
    void draw(CImage *image);
};

#endif /*LIGNE_H_*/