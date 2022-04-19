#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>

#include "../Image/Ligne.h"
#include "../Image/Forme.h"
#include "../Image/Rectangle.h"
#include "../Format/CBitmap.h"
#include "../Image/Carre.h"
#include "../Image/RectangleS.h"
#include "../Image/CarreS.h"
#include "../Image/Point.h"
#include "../Image/Cercle.h"
#include "../Image/CercleS.h"


using namespace std;

#ifndef READ_FILE_H_
#define READ_FILE_H_

void read_file(string name,string endname, int scale);

class PrioritizeTasks {
    public :
    int operator()(const Forme* x, const Forme* y ){
        return x->z > y->z;    
    }
};

#endif /*READ_FILE_H_*/
