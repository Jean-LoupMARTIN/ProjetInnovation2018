
#include "Header.h"

void salle_carre_caisse(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur)
{
    int taille_couronne = 5 + rand() % 4;
    int hauteur_rectange = hauteur - 2*(taille_couronne-1);
    int largeur_rectangle = largeur - 2*(taille_couronne-1);
    
    rectangle(carte, centre, hauteur_rectange, largeur_rectangle, 'B', "rempli", 1, "objet");
    rectangle(carte, centre, hauteur_rectange-2, largeur_rectangle-2, '.', "rempli", 1, "objet");
}
