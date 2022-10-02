
#include "Header.h"

void creation_salle_horde(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    creation_petit_plateau(carte, centre, labyrithe);
    porte_tunnel_salle_cible(carte, centre, TAILLE_PETIT_PLATEAU+2, TAILLE_PETIT_PLATEAU+2, TAILLE_TUNNEL+6, ' ', -1, 1, 'X');
    carte[centre.x][centre.y].objet = 'L';
    ajouter_monstre(carte, enemies, centre, TAILLE_PETIT_PLATEAU-2, TAILLE_PETIT_PLATEAU-2, PROBA_GARDE_ELITE_SALLE_HORDE, 'G', niveau, perso);
}














