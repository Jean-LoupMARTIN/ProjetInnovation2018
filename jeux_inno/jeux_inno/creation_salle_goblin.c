
#include "Header.h"

void creation_salle_goblin(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    rectangle(carte, centre, TAILLE_SALLE_GOBLIN, TAILLE_SALLE_GOBLIN, 'X', "contour", 1, "decor");
    rectangle(carte, centre, TAILLE_SALLE_GOBLIN-2, TAILLE_SALLE_GOBLIN-2, ' ', "rempli", 1, "decor");
    porte_tunnel(carte, centre, TAILLE_SALLE_GOBLIN, TAILLE_SALLE_GOBLIN, labyrithe, ' ', 1, 1, 'P');
    
    ajouter_monstre(carte, enemies, centre, TAILLE_SALLE_GOBLIN-2, TAILLE_SALLE_GOBLIN-2, PROBA_GOBLIN_SALLE_GOBLIN, 'u', niveau, perso);
}
