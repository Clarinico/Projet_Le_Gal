#include "Rectangle.h"
#include "Ligne.h"
#include "Forme.h"
#include <string>
using namespace std;

Rectangle::Rectangle()
    :Forme()
{
    hauteur = 0;
    longueur = 0;
}

Rectangle::Rectangle(int _R, int _G, int _B, int _transparence, int _x, int _y, int _hauteur, int _longueur, int _z)
    :Forme(_R, _G, _B, _transparence, _x, _y, _z)
{
    hauteur = _hauteur;
    longueur = _longueur;
}


Rectangle::~Rectangle(){
    cout <<"Destruction !"<<endl;
}


void Rectangle::draw(CImage *img) {
    //Arrête gauche
    Ligne *lg= new Ligne(R,G,B, transparence, x, y, x, y + hauteur, z);
    lg->draw(img);
    delete lg;
    cout <<"Arrête gauche" << endl;

    //Arrête bas
    Ligne *lb= new Ligne(R,G,B, transparence, x, y, x + longueur, y ,z);
    lb->draw(img);
    delete lb;
    cout <<"Arrête bas" << endl;

    //Arrête haut
    Ligne *lh= new Ligne(R,G,B, transparence, x, y + hauteur, x + longueur, y + hauteur, z);
    lh->draw(img);
    delete lh;
    cout <<"Arrête haut" << endl;

    //Arrête droite
    Ligne *ld= new Ligne(R,G,B, transparence, x + longueur, y, x + longueur, y + hauteur+1, z);
    ld->draw(img);
    delete ld;
    cout <<"Arrête droite" << endl;
}