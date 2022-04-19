#include <string>
#include <math.h>
using namespace std;

#include "../Format/CBitmap.h"

#ifndef FORME_H_
#define FORME_H_



class Forme{
    public :
    friend class PrioritizeTasks;
    //Attributs
    int R;
    int G;
    int B;
    int transparence;
    int x;
    int y;
    int z;

    //Méthodes
    Forme();
    Forme(int R, int G, int B, int _transparence, int _x, int _y, int _z);
    ~Forme();
    virtual void draw(CImage *image)=0;
};

#endif /*FORME_H_*/