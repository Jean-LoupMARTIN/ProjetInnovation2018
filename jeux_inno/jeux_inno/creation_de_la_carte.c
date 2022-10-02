
#include "Header.h"

void creation_de_la_carte(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    initialisation_carte(carte);
    
    placer_tunnels(carte, labyrithe, ' ', 'X', 1, 1);
    
    placer_salle(carte, enemies ,labyrithe, niveau, perso);
    
    modifier_carte(carte);
}
