
#include "Header.h"

void creation_salle_ombre(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    rectangle(carte, centre, TAILLE_SALLE_OMBRE, TAILLE_SALLE_OMBRE, 'X', "contour", 1, "decor");
    rectangle(carte, centre, TAILLE_SALLE_OMBRE, TAILLE_SALLE_OMBRE, 'x', "contour", PROBA_MUR_2, "decor");
    rectangle(carte, centre, TAILLE_SALLE_OMBRE-2, TAILLE_SALLE_OMBRE-2, ' ', "rempli", 1, "decor");
    porte_tunnel(carte, centre, TAILLE_SALLE_OMBRE, TAILLE_SALLE_OMBRE, labyrithe, ' ', 1, 1, 'P');
    
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_OMBRE+2, TAILLE_SALLE_OMBRE+2, TAILLE_TUNNEL+6, ' ', -1, 1, 'X');
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_OMBRE+4, TAILLE_SALLE_OMBRE+4, TAILLE_TUNNEL+6, ' ', -1, 1, 'X');
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_OMBRE+6, TAILLE_SALLE_OMBRE+6, TAILLE_TUNNEL+6, ' ', -1, 1, 'X');
    
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_OMBRE+2, TAILLE_SALLE_OMBRE+2, TAILLE_TUNNEL+12, ' ', -1, 1, 'X');
    
    carte[centre.x][centre.y].objet = 'L';
    
    ajouter_monstre(carte, enemies, centre, TAILLE_SALLE_OMBRE-2, TAILLE_SALLE_OMBRE-2, PROBA_LICHE_SALLE_OMBRE, 'N', niveau, perso);
}

