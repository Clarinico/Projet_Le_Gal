#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"
#include "Forme.h"

#ifndef POINT_H_
#define POINT_H_



class Point : public Forme{
    public :
    //Attributs

    //Méthodes
    Point();
    Point(int _R, int _G, int _B, int _transparence, int _x, int _y);
    ~Point();
    void draw(CImage *image);
};



#endif /*POINT_H_*/