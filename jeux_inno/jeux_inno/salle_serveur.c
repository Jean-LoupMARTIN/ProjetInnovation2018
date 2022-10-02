
#include "Header.h"

void salle_serveur(char carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element)
{
    int i, j, k;
    int moitier_hauteur = (hauteur-1)/2;
    int moitier_largeur = (largeur-1)/2;
    int taille_couronne = 4;
    int espace_entre_serveur = 1;
    int taille_serveur = 2;

    for (i = MOITIE_TAILLE_TUNNEL+1; i < moitier_hauteur - taille_serveur; i += espace_entre_serveur + taille_serveur)
    {
        for (j = (taille_couronne-1); j < moitier_largeur - MOITIE_TAILLE_TUNNEL; j++)
        {
            for (k = 0; k < taille_serveur; k++)
            {
                carte[centre.x - moitier_largeur + j][centre.y + i + k] = element;
                carte[centre.x + moitier_largeur - j][centre.y + i + k] = element;
                carte[centre.x - moitier_largeur + j][centre.y - i - k] = element;
                carte[centre.x + moitier_largeur - j][centre.y - i - k] = element;
            }
        }
    }
}
