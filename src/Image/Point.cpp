#include "Point.h"
#include "Forme.h"
#include <string>
using namespace std;

Point::Point()
    :Forme()
{
}

Point::Point(int _R, int _G, int _B, int _transparence, int _x, int _y)
    :Forme(_R, _G, _B, _transparence, _x, _y)
{
}


Point::~Point(){
    cout <<"Destruction !"<<endl;
}


void Point::draw(CImage *img) {
    CPixel *p = img->getPixel((int)(x), (int)(y)); 
    p->RGB(R,G,B); 
}