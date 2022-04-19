#include "Read_file.h"
#include <string>
#include <vector> 

using namespace std;


void read_file(string name, string endname, int scale){

    ifstream f;
    string line;
    
    f.open(name);

    if( f.is_open() == false )
    {
        cout << "Error opening " << name << endl;
        return;
    }

    // créer un tableau de formes vide
    priority_queue<Forme*, vector<Forme*>, PrioritizeTasks> tableau_plan;

    int pl;
    int max; //Coord du pixel le plus éloigné de (0;0)


    /* fait un while fichier pas fini*/
    
    int nline = 0;
    while (f.peek() != EOF){
        getline(f, line);

        Forme *fig;

        cout << "Creation Forme fig " << endl;
        
        istringstream iss( line );
        string instruction;
        getline( iss, instruction, ':' );

        cout << "LINE " << nline++ << " [" << line << "]" << endl;

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
            fig = new Point(R, G, B, transparence,x*scale,y*scale,pl);

            //Calcul de max
            max=(max < x*scale)?(x*scale):max;
            max=(max < y*scale)?(y*scale):max;

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
            fig = new Ligne(R, G, B, transparence, x1*scale, y1*scale, x2*scale, y2*scale,pl);

            //Calcul de max
            max=(max < x1*scale)?(x1*scale):max;
            max=(max < y1*scale)?(y1*scale):max;
            max=(max < x2*scale)?(x2*scale):max;
            max=(max < y2*scale)?(y2*scale):max;

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

            fig = new Rectangle(R, G, B, transparence, x*scale, y*scale, HAUTEUR*scale, LONGUEUR*scale, pl);

            //Calcul de max
            max=(max < x*scale + HAUTEUR*scale)?(x*scale+HAUTEUR*scale):max;
            max=(max < y*scale+LONGUEUR*scale)?(y*scale+LONGUEUR*scale):max;

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

            fig = new RectangleS(R, G, B, transparence, x*scale, y*scale, HAUTEUR*scale, LONGUEUR*scale, pl);

            //Calcul de max
            max=(max < x*scale + HAUTEUR*scale)?(x*scale+HAUTEUR*scale):max;
            max=(max < y*scale+LONGUEUR*scale)?(y*scale+LONGUEUR*scale):max;

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

            fig = new Carre(R, G, B, transparence, x*scale, y*scale, HAUTEUR*scale, pl);

            //Calcul de max
            max=(max < x*scale + HAUTEUR*scale)?(x*scale+HAUTEUR*scale):max;
            max=(max < y*scale + HAUTEUR*scale)?(y*scale+HAUTEUR*scale):max;

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

            fig = new CarreS(R, G, B, transparence, x*scale, y*scale, HAUTEUR*scale, pl);

            //Calcul de max
            max=(max < x*scale + HAUTEUR*scale)?(x*scale+HAUTEUR*scale):max;
            max=(max < y*scale + HAUTEUR*scale)?(y*scale+HAUTEUR*scale):max;

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
            

            fig = new Cercle(R, G, B, transparence, x*scale, y*scale, RAYON*scale, pl);

            //Calcul de max
            max=(max < x*scale + RAYON*scale)?(x*scale+RAYON*scale):max;
            max=(max < y*scale + RAYON*scale)?(y*scale+RAYON*scale):max;

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

            fig = new CercleS(R, G, B, transparence, x*scale, y*scale, RAYON*scale, pl);

            //Calcul de max
            max=(max < x*scale + RAYON*scale)?(x*scale+RAYON*scale):max;
            max=(max < y*scale + RAYON*scale)?(y*scale+RAYON*scale):max;
        }

        //Remplissage du tableau avec les figures
        cout << "stockage" << endl;
        tableau_plan.push(fig);
//        cout << fig << endl;
        cout << "stockage fin" << endl;

        //elimination de ]
        string crochet;
        getline(iss,crochet);
        
    }

    cout << "sortie boucle while" << endl;
    
    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = endname;

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(max, max);

    //dessin
    int taille = tableau_plan.size();
        for (int i=0; i<taille; i++){
            cout << "BOUCLE FOR " << i << " ENTREE" << endl;
            //for (int j=0; j=tableau_plan[i].size(); j++) {
            cout << tableau_plan.top() << endl;
            tableau_plan.top()->draw(img);
            delete tableau_plan.top();
            tableau_plan.pop();
            image->setImage( img );
            //}
        }
    
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);
    
    

};
