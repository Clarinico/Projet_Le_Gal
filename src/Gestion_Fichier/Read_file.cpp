#include "Read_file.h"
#include <string>

using namespace std;


void read_file(string name){

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200);

    ifstream f;
    string line;
    
    f.open(name);

    if( f.is_open() == false )
    {
        cout << "Error opening " << name << endl;
        return;
    }

    /* faire un while fichier pas fini*/

    getline(f, line);
    
    istringstream iss( line );
    string instruction;
    getline( iss, instruction, ':' );

    if (instruction.compare("[POINT ") ==0) {

        //récupération de X
        string coord_X;
        getline( iss, coord_X, ',' );
        int x;
        istringstream(coord_X) >> x;
        //récupérartion de Y
        string coord_Y;
        getline( iss, coord_Y, ',' );
        int y;
        istringstream(coord_Y) >> y;
        //récupération de R
        string RED;
        getline( iss, RED, ',' );
        int R;
        istringstream(RED) >> R;
        //récupération de G
        string GREEN;
        getline( iss, GREEN, ',' );
        int G;
        istringstream(GREEN) >> G;
        //récupération de B
        string BLUE;
        getline( iss, BLUE, ',' );
        int B;
        istringstream(BLUE) >> B;
        //récupération de transparence
        string trans;
        getline( iss, trans, ';' );
        int transparence;
        istringstream(trans) >> transparence;

        //dessin

        Point *pt = new Point(R, G, B, transparence,x,y);
        pt -> draw(img);
        delete pt;
        image->setImage( img );

        cout << "(II) CBitmap image saving" << endl;
        image->SaveBMP(filename2);

    }

};
