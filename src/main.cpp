#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "./Image/Ligne.h"
#include "./Image/Forme.h"
#include "./Image/Rectangle.h"
#include "./Format/CBitmap.h"
#include "./Image/Carre.h"
#include "./Image/RectangleS.h"
#include "./Image/CarreS.h"
#include "./Image/Point.h"
#include "./Image/Cercle.h"
#include "./Image/CercleS.h"

int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200);

    //TEST TOUT
    /*
    CarreS *car = new CarreS(0,255,0,0, 100,50,10);
    car->draw(img);
    delete car; 

    
    RectangleS *rct = new RectangleS(0,255,255,0, 50,50,5,20);
    rct->draw(img);
    delete rct;


    Ligne *l1= new Ligne(5,255,100, 0, 0,0,199,199);
    l1->draw(img);
    delete l1;

    CercleS *c = new CercleS(70, 255, 70, 0, 100, 100, 40);
    c -> draw(img);
    delete c;

    Point *pt = new Point(255, 0, 255, 0, 100, 100);
    pt -> draw(img);
    delete pt; */

    //Pikachu

    CarreS *car1 = new CarreS(255,255,255,0,0,0,200);
    car1 -> draw(img);
    delete car1;

    CarreS *car2 = new CarreS(255,255,0,0,50,10,100);
    car2 -> draw(img);
    delete car2;

    //OREILLES
    RectangleS *rct1 = new RectangleS(255,255,0,0,50,110,70,20);
    rct1 -> draw(img);
    delete rct1;

    RectangleS *rct2 = new RectangleS(255,255,0,0,130,110,70,20);
    rct2 -> draw(img);
    delete rct2;

    CarreS *car3 = new CarreS(0,0,0,0,50,160,20);
    car3 -> draw(img);
    delete car3;

    CarreS *car4 = new CarreS(0,0,0,0,130,160,20);
    car4 -> draw(img);
    delete car4;

    //JOUES
    CarreS *car5 = new CarreS(255,0,0,0,55,55,10);
    car5 -> draw(img);
    delete car5;

    CarreS *car6 = new CarreS(255,0,0,0,135,55,10);
    car6 -> draw(img);
    delete car6;

    //YEUX
    CarreS *car7 = new CarreS(0,0,0,0,65,80,20);
    car7 -> draw(img);
    delete car7;

    CarreS *car8 = new CarreS(0,0,0,0,115,80,20);
    car8 -> draw(img);
    delete car8;

    CarreS *car9 = new CarreS(255,255,255,0,65,80,10);
    car9 -> draw(img);
    delete car9;

    CarreS *car10 = new CarreS(255,255,255,0,115,80,10);
    car10 -> draw(img);
    delete car10;

    //BOUCHE
    RectangleS *rct3 = new RectangleS(255,0,0,0,80,25,20,40);
    rct3 -> draw(img);
    delete rct3;

    RectangleS *rct4 = new RectangleS(255,0,255,0,90,25,10,20);
    rct4 -> draw(img);
    delete rct4;

    image->setImage( img );

    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);

    return 1;
}

