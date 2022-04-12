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
    int nwr;
    int nwb;
    int nwg;
    int transp = transparence;
    for(int coord_x =x-rayon-1; coord_x<x+rayon+1; coord_x++) {
        for(int coord_y =y-rayon-1; coord_y<y+rayon+1; coord_y++) {
            if ((pow((coord_y-y), 2) + pow((coord_x-x), 2)) <= (rayon * rayon)) {
                CPixel *p = img->getPixel(coord_x, coord_y); 
                nwr = ((100- transp)*p->Red() + transp * R)/100;
                nwg = ((100- transp)*p->Green() + transp * G)/100;
                nwb = ((100- transp)*p->Blue() + transp * B)/100;
                p->RGB(nwr,nwg,nwb); 
            } 
        }     
    }
}