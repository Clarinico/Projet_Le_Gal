#include "Forme.h"
#include <string>
using namespace std;

Forme::Forme(){
    R = 0;
    G = 0;
    B = 0;
    transparence = 0;
    x= 0;
    y = 0;
    z = 0;
}

Forme::Forme(int _R, int _G, int _B, int _transparence, int _x, int _y, int _z){
   R = _R;
   G = _G;
   B = _B;
   transparence = _transparence;
   x=_x;
   y = _y;
   z = _z;
}


Forme::~Forme(){
    cout <<"Destruction !"<<endl;
}

