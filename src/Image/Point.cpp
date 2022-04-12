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
    int nwr;
    int nwb;
    int nwg;
    int transp = transparence;
    CPixel *p = img->getPixel((int)(x), (int)(y)); 
    nwr = ((100- transp)*p->Red() + transp * R)/100;
    nwg = ((100- transp)*p->Green() + transp * G)/100;
    nwb = ((100- transp)*p->Blue() + transp * B)/100;
    p->RGB(nwr,nwg,nwb); 
}