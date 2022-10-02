
#include "Header.h"

void salle_caisse_alea(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, Coor perso, Liste_enemie* enemies)
{
    rectangle(carte, centre, hauteur-2, largeur-2, 'S', "rempli", SALLE_CAISSE_ALEA_PROBA_SERVEUR, "objet");
    rectangle(carte, centre, hauteur-2, largeur-2, 'B', "rempli", SALLE_CAISSE_ALEA_PROBA_CAISSE, "objet");

    ajouter_monstre(carte, enemies, centre, hauteur, largeur, PROBA_CAISSE_ETRANGE_SALLE_CAISSE_ALEA, 'b', 1, perso);
}
