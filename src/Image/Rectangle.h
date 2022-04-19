#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "Forme.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_



class Rectangle : public Forme{
    public :
    //Attributs
    int hauteur;
    int longueur;

    //Méthodes
    Rectangle();
    Rectangle(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur, int _longueur, int _z);
    ~Rectangle();
    void draw(CImage *image);
};

#endif /*RECTANGLE_H_*/