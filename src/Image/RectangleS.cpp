#include "RectangleS.h"
#include "Ligne.h"
#include "Rectangle.h"
#include <string>
using namespace std;

RectangleS::RectangleS()
    :Rectangle()
{
    
}

RectangleS::RectangleS(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur, int _longueur)
    :Rectangle(_R, _G, _B, _transparence, _x, _y, _hauteur, _longueur)
{

}


RectangleS::~RectangleS(){
    cout <<"Destruction !"<<endl;
}


void RectangleS::draw(CImage *img) {
    for(int i = 0; i < hauteur; i++){
        Ligne *l= new Ligne(R,G,B, transparence, x, y + i, x + longueur, y + i);
        l->draw(img);
        delete l;
    }
}