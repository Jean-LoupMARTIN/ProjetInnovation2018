
#include "Header.h"

void creation_salle_couloir(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies ,Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    rectangle(carte, centre, TAILLE_TUNNEL, TAILLE_TUNNEL, 'X', "contour", 1, "decor");
    rectangle(carte, centre, TAILLE_TUNNEL-2, TAILLE_TUNNEL-2, ' ', "rempli", 1, "decor");
    porte_tunnel(carte, centre, TAILLE_TUNNEL, TAILLE_TUNNEL, labyrithe, ' ', 1, 0, 'P');
    
    ajouter_monstre(carte, enemies, centre, 1, 1, PROBA_MINAUTOR_SALLE_COULOIR, 'M', niveau, perso);
}
