
#include "Header.h"

void creation_petit_plateau(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{    
    rectangle(carte, centre, TAILLE_PETIT_PLATEAU, TAILLE_PETIT_PLATEAU, 'X', "contour", 1, "decor");
    rectangle(carte, centre, TAILLE_PETIT_PLATEAU-2, TAILLE_PETIT_PLATEAU-2, ' ', "rempli", 1, "decor");
    porte_tunnel(carte, centre, TAILLE_PETIT_PLATEAU, TAILLE_PETIT_PLATEAU, labyrithe, ' ', 1, 1, 'P');
}










