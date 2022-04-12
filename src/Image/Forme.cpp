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
}

Forme::Forme(int _R, int _G, int _B, int _transparence, int _x, int _y){
   R = _R;
   G = _G;
   B = _B;
   transparence = _transparence;
   x=_x;
   y = _y;
}


Forme::~Forme(){
    cout <<"Destruction !"<<endl;
}

