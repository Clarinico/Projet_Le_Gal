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
#include "./Gestion_Fichier/Read_file.h"

int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;



    /*cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200);*/

    //TEST TOUT
    
    /*CarreS *car = new CarreS(0,255,0,0, 100,50,10);
    car->draw(img);
    delete car; 

    
    RectangleS *rct = new RectangleS(0,255,255,0, 50,50,5,20);
    rct->draw(img);
    delete rct;


    Ligne *l1= new Ligne(5,255,100, 50, 0,0,199,199);
    l1->draw(img);
    delete l1;

    CercleS *c = new CercleS(5, 255, 100, 100, 100, 100, 40);
    c -> draw(img);
    delete c;

    Point *pt = new Point(255, 0, 255, 0, 100, 100);
    pt -> draw(img);
    delete pt; */

    read_file(argv[1], argv[2], atoi(argv[3]));

    return 1;
}

