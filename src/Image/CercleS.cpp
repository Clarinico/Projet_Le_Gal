#include "CercleS.h"
#include "Cercle.h"
#include <string>
using namespace std;

CercleS::CercleS()
    :Cercle()
{
}

CercleS::CercleS(int _R, int _G, int _B, int _transparence, int _x, int _y, int _rayon)
    :Cercle(_R, _G, _B, _transparence, _x, _y, _rayon)
{
}


CercleS::~CercleS(){
    cout <<"Destruction !"<<endl;
}


void CercleS::draw(CImage *img) {
    for(int coord_x =x-rayon-1; coord_x<x+rayon+1; coord_x++) {
        for(int coord_y =y-rayon-1; coord_y<y+rayon+1; coord_y++) {
            if ((pow((coord_y-y), 2) + pow((coord_x-x), 2)) <= (rayon * rayon)) {
                CPixel *p = img->getPixel(coord_x, coord_y); 
                p->RGB(R,G,B); 
            } 
        }     
    }
}