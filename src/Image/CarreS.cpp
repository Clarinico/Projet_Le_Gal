#include "CarreS.h"
#include "Ligne.h"
#include "RectangleS.h"
#include <string>
using namespace std;

CarreS::CarreS()
    :RectangleS()
{
    
}

CarreS::CarreS(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur, int _z)
    :RectangleS(_R, _G, _B, _transparence, _x, _y, _hauteur, _hauteur, _z)
{

}


CarreS::~CarreS(){
    cout <<"Destruction !"<<endl;
}


void CarreS::draw(CImage *img) {
    RectangleS::draw(img);
}