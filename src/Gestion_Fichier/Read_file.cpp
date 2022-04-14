#include "Read_file.h"
#include <string>
#include <vector> 

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

    // créer un tableau de formes vide
    vector<vector<Forme>> tableau_plan;
    vector<vector<string>> tableau_type;

    int pl;


    /* fait un while fichier pas fini*/
    while (f.peek() != EOF){
        getline(f, line);

        Forme *fig;

        cout << "Creation Forme fig " << endl;
        
        istringstream iss( line );
        string instruction;
        getline( iss, instruction, ':' );

        cout << "Lecture fichier" << endl;

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            
            //dessin
            
            fig = new Point(R, G, B, transparence,x,y);
            tableau_type[pl].push_back("p");
        }

        else if (instruction.compare("[LIGNE ") ==0) {

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            

            //dessin

            fig = new Ligne(R, G, B, transparence, x1, y1, x2, y2);
            tableau_type[pl].push_back("l");

        }

        else if (instruction.compare("[RECTANGLE ") ==0) {

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            

            //dessin

            fig = new Rectangle(R, G, B, transparence, x, y, HAUTEUR, LONGUEUR);
            tableau_type[pl].push_back("r");

        }

        else if (instruction.compare("[RECTANGLES ") ==0) {

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            

            //dessin

            fig = new RectangleS(R, G, B, transparence, x, y, HAUTEUR, LONGUEUR);
            tableau_type[pl].push_back("rs");
        }

        else if (instruction.compare("[CARRE ") ==0) {

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            

            //dessin

            fig = new Carre(R, G, B, transparence, x, y, HAUTEUR);
            tableau_type[pl].push_back("ca");

        }

        else if (instruction.compare("[CARRES ") ==0) {

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            

            //dessin

            fig = new CarreS(R, G, B, transparence, x, y, HAUTEUR);
            tableau_type[pl].push_back("cas");

        }

        else if (instruction.compare("[CERCLE ") ==0) {

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            

            //dessin
            

            fig = new Cercle(R, G, B, transparence, x, y, RAYON);
            tableau_type[pl].push_back("ce");

        }

        else if (instruction.compare("[CERCLES ") ==0) {

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

            //récupération de transparence et de plan
            string trans_plan;
            getline( iss, trans_plan, ';' );
            istringstream isss(trans_plan);

            string trans;
            getline(isss,trans,',');
            int transparence;
            istringstream(trans) >> transparence;

            string plan;
            getline(isss,plan,';');
            if (plan.empty()) {
                pl=0;
            }
            else {
                istringstream(plan) >> pl;
            }
            

            //dessin

            fig = new CercleS(R, G, B, transparence, x, y, RAYON);
            tableau_type[pl].push_back("ces");
        }

        //Remplissage du tableau avec les figures
        tableau_plan[pl].push_back(*fig);


        //elimination de ]
        string crochet;
        getline(iss,crochet);
        
    }

    //dessin
        for (int i=0; i=tableau_plan.size(); i++){
            for (int j=0; j=tableau_plan[i].size(); j++) {
                if(tableau_type[i][j].compare("p")){}
                tableau_plan[i][j].draw(img);
                delete &tableau_plan[i][j];
                image->setImage( img );
            }
        }   //CREER UN TABLEAU PAR TYPE
    
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);
    
    

};
