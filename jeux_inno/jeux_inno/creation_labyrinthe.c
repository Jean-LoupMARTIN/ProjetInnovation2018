
#include "Header.h"

void creation_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau)
{
    case_labyrinthe prototype_labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE];
    Coor centre_labyrinthe;
    centre_labyrinthe.x = (TAILLE_LABYRINTHE - 1) / 2;
    centre_labyrinthe.y = (TAILLE_LABYRINTHE - 1) / 2;
    
    do {
        initialisation_labyrinthe(prototype_labyrinthe);
        creation_prototype_labyrinthe(prototype_labyrinthe, centre_labyrinthe);
        relier_salle(prototype_labyrinthe);
    } while ( !(prototype_valide(prototype_labyrinthe, niveau)) );
    
    copier_labyrinthe(labyrinthe, prototype_labyrinthe);
    
    choisir_type_salle(labyrinthe, niveau);
}
