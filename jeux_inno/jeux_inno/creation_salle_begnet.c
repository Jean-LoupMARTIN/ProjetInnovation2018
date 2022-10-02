
#include "Header.h"

void creation_salle_begnet(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{
    int hauteur = 39 + 2 * (rand() % 4);
    int largeur = 39 + 2 * (rand() % 4);

    rectangle(carte, centre, hauteur, largeur, 'X', "contour", 1, "decor");
    
    rectangle(carte, centre, hauteur-2, largeur-2, ' ', "rempli", 1, "decor");
    
    rectangle(carte, centre, hauteur - 2*(TAILLE_TUNNEL-1), largeur - 2*(TAILLE_TUNNEL-1), 'X', "contour", 1, "decor");
    rectangle(carte, centre, hauteur-2 - 2*(TAILLE_TUNNEL-1), largeur-2 - 2*(TAILLE_TUNNEL-1), '.', "rempli", 1, "decor");
    
    porte_tunnel(carte, centre, hauteur, largeur, labyrinthe, ' ', 1, 0, 'P');
}
