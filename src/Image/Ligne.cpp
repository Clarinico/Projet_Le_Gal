#include "Ligne.h"
#include "Forme.h"
#include <string>
using namespace std;

Ligne::Ligne()
    :Forme()
{
    x2 = 0;
    y2 = 0;
}

Ligne::Ligne(int _R, int _G, int _B, int _transparence, int _x, int _y, int _x2, int _y2)
    :Forme(_R, _G, _B, _transparence, _x, _y)
{
   x2 =_x2;
   y2 = _y2;
}


Ligne::~Ligne(){
    cout <<"Destruction !"<<endl;
}


void Ligne::draw(CImage *img) {
    double deltax = fabs(x - x2);
    double deltay = fabs(y - y2);
    int n = fmax(deltax,deltay);
    double stepx = (double)(x2-x)/(n);
    double stepy = (double)(y2-y)/(n);
    for(int i =0; i<n; i++) {
        CPixel *p = img->getPixel((int)(x + i*stepx), (int)(y + i*stepy)); 
        p->RGB(R,G,B); 
    } 
}