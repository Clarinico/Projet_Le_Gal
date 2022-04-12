#include "Carre.h"
#include "Ligne.h"
#include "Rectangle.h"
#include <string>
using namespace std;

Carre::Carre()
    :Rectangle()
{
    
}

Carre::Carre(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur)
    :Rectangle(_R, _G, _B, _transparence, _x, _y, _hauteur, _hauteur)
{

}


Carre::~Carre(){
    cout <<"Destruction !"<<endl;
}


void Carre::draw(CImage *img) {
    Rectangle::draw(img);
}