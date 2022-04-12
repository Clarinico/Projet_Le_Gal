#include "Cercle.h"
#include "Forme.h"
#include <string>
using namespace std;

Cercle::Cercle()
    :Forme()
{
    rayon = 0;
}

Cercle::Cercle(int _R, int _G, int _B, int _transparence, int _x, int _y, int _rayon)
    :Forme(_R, _G, _B, _transparence, _x, _y)
{
   rayon =_rayon;
}


Cercle::~Cercle(){
    cout <<"Destruction !"<<endl;
}


void Cercle::draw(CImage *img) {
    int nwr;
    int nwb;
    int nwg;
    int transp = transparence;
    for(int teta =0; teta<3601; teta++) {
        double rad_teta = (teta*2*3.14 /3600);
        CPixel *p = img->getPixel((int)(rayon*cos(rad_teta)+x), (int)(rayon*sin(rad_teta)+y)); 
        nwr = ((100- transp)*p->Red() + transp * R)/100;
        nwg = ((100- transp)*p->Green() + transp * G)/100;
        nwb = ((100- transp)*p->Blue() + transp * B)/100;
        p->RGB(nwr,nwg,nwb); 
    }
}