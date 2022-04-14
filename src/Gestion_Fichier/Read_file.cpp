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
    while (f.peek() != EOF){
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

        if (instruction.compare("[LIGNE ") ==0) {

            //récupération de X1
            string coord_X1;
            getline( iss, coord_X1, ',' );
            int x1;
            istringstream(coord_X1) >> x1;
            //récupérartion de Y1
            string coord_Y1;
            getline( iss, coord_Y1, ',' );
            int y1;
            istringstream(coord_Y1) >> y1;
            //récupération de X2
            string coord_X2;
            getline( iss, coord_X2, ',' );
            int x2;
            istringstream(coord_X2) >> x2;
            //récupérartion de Y2
            string coord_Y2;
            getline( iss, coord_Y2, ',' );
            int y2;
            istringstream(coord_Y2) >> y2;
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

            Ligne *l = new Ligne(R, G, B, transparence, x1, y1, x2, y2);
            l -> draw(img);
            delete l;
            image->setImage( img );

            cout << "(II) CBitmap image saving" << endl;
            image->SaveBMP(filename2);

        }

        if (instruction.compare("[RECTANGLE ") ==0) {

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
            //récupération de LONGUEUR
            string lon;
            getline( iss, lon, ',' );
            int LONGUEUR;
            istringstream(lon) >> LONGUEUR;
            //récupérartion de HAUTEUR
            string haut;
            getline( iss, haut, ',' );
            int HAUTEUR;
            istringstream(haut) >> HAUTEUR;
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

            Rectangle *r = new Rectangle(R, G, B, transparence, x, y, HAUTEUR, LONGUEUR);
            r -> draw(img);
            delete r;
            image->setImage( img );

            cout << "(II) CBitmap image saving" << endl;
            image->SaveBMP(filename2);

        }

        if (instruction.compare("[RECTANGLES ") ==0) {

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
            //récupération de LONGUEUR
            string lon;
            getline( iss, lon, ',' );
            int LONGUEUR;
            istringstream(lon) >> LONGUEUR;
            //récupérartion de HAUTEUR
            string haut;
            getline( iss, haut, ',' );
            int HAUTEUR;
            istringstream(haut) >> HAUTEUR;
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

            RectangleS *r = new RectangleS(R, G, B, transparence, x, y, HAUTEUR, LONGUEUR);
            r -> draw(img);
            delete r;
            image->setImage( img );

            cout << "(II) CBitmap image saving" << endl;
            image->SaveBMP(filename2);

        }

        if (instruction.compare("[CARRE ") ==0) {

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
            //récupérartion de HAUTEUR
            string haut;
            getline( iss, haut, ',' );
            int HAUTEUR;
            istringstream(haut) >> HAUTEUR;
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

            Carre *car = new Carre(R, G, B, transparence, x, y, HAUTEUR);
            car -> draw(img);
            delete car;
            image->setImage( img );

            cout << "(II) CBitmap image saving" << endl;
            image->SaveBMP(filename2);

        }

        if (instruction.compare("[CARRES ") ==0) {

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
            //récupérartion de HAUTEUR
            string haut;
            getline( iss, haut, ',' );
            int HAUTEUR;
            istringstream(haut) >> HAUTEUR;
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

            CarreS *car = new CarreS(R, G, B, transparence, x, y, HAUTEUR);
            car -> draw(img);
            delete car;
            image->setImage( img );

            cout << "(II) CBitmap image saving" << endl;
            image->SaveBMP(filename2);

        }

        if (instruction.compare("[CERCLE ") ==0) {

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
            //récupérartion de RAYON
            string ray;
            getline( iss, ray, ',' );
            int RAYON;
            istringstream(ray) >> RAYON;
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
            

            Cercle *cerc = new Cercle(R, G, B, transparence, x, y, RAYON);
            cerc-> draw(img);
            delete cerc;
            image->setImage( img );

            cout << "(II) CBitmap image saving" << endl;
            image->SaveBMP(filename2);

        }

        if (instruction.compare("[CERCLES ") ==0) {

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
            //récupérartion de RAYON
            string ray;
            getline( iss, ray, ',' );
            int RAYON;
            istringstream(ray) >> RAYON;
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

            CercleS *cerc = new CercleS(R, G, B, transparence, x, y, RAYON);
            cerc-> draw(img);
            delete cerc;
            image->setImage( img );

            cout << "(II) CBitmap image saving" << endl;
            image->SaveBMP(filename2);
        }
        //elimination de ]
        string crochet;
        getline(iss,crochet);

    }

};
