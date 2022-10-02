
#include "Header.h"

void creation_salle_dragon(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    rectangle(carte, centre, TAILLE_SALLE_DRAGON, TAILLE_SALLE_DRAGON, 'X', "contour", 1, "decor");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-2, TAILLE_SALLE_DRAGON-2, ' ', "rempli", 1, "decor");

    rectangle(carte, centre, TAILLE_SALLE_DRAGON-2, TAILLE_SALLE_DRAGON-2, 'C', "rempli", PROBA_COFFRE_SALLE_DRAGON, "objet");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-2, TAILLE_SALLE_DRAGON-2, 'L', "rempli", PROBA_COFFRE_LEGENDAIRE_SALLE_DRAGON, "objet");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-8, TAILLE_SALLE_DRAGON-8, '.', "rempli", 1, "objet");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-2, TAILLE_TUNNEL, '.', "rempli", 1, "objet");
    rectangle(carte, centre, TAILLE_TUNNEL, TAILLE_SALLE_DRAGON-2, '.', "rempli", 1, "objet");
    
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-2, TAILLE_SALLE_DRAGON-2, 'c', "rempli", PROBA_COFFRE_VIDE_SALLE_DRAGON, "objet");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-2, TAILLE_SALLE_DRAGON-2, 'l', "rempli", PROBA_COFFRE_LEGENDAIRE_VIDE_SALLE_DRAGON, "objet");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-2, TAILLE_TUNNEL, '.', "rempli", 1, "objet");
    rectangle(carte, centre, TAILLE_TUNNEL, TAILLE_SALLE_DRAGON-2, '.', "rempli", 1, "objet");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-8, TAILLE_SALLE_DRAGON-8, '.', "contour", 1, "objet");
    
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-14, TAILLE_SALLE_DRAGON-14, 't', "rempli", 1, "decor");
    rectangle(carte, centre, TAILLE_SALLE_DRAGON-16, TAILLE_SALLE_DRAGON-16, 'T', "rempli", 1, "decor");

    
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_DRAGON+2, TAILLE_SALLE_DRAGON+2, TAILLE_TUNNEL+6, ' ', -1, 1, 'X');
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_DRAGON+4, TAILLE_SALLE_DRAGON+4, TAILLE_TUNNEL+6, ' ', -1, 1, 'X');
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_DRAGON+6, TAILLE_SALLE_DRAGON+6, TAILLE_TUNNEL+4, ' ', -1, 1, 'X');
    porte_tunnel_salle_cible(carte, centre, TAILLE_SALLE_DRAGON+2, TAILLE_SALLE_DRAGON+2, TAILLE_TUNNEL+10, ' ', -1, 1, 'X');
    
    
    porte_tunnel(carte, centre, TAILLE_SALLE_DRAGON, TAILLE_SALLE_DRAGON, labyrithe, ' ', 1, 1, 'P');
    
    ajouter_monstre(carte, enemies, centre, 1, 1, 1, 'D', niveau, perso);
}
