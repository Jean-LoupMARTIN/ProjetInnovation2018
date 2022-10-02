
#include "Header.h"

int place_suffisante_pot_fleur(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur)
{
    int i, j;
    int moitier_hauteur = (hauteur-1)/2;
    int moitier_largeur = (largeur-1)/2;
    int obstacle = 0;
    
    for (i = -(moitier_hauteur+DISTANCE_POT_DE_FLEUR); i < moitier_hauteur+DISTANCE_POT_DE_FLEUR; i++)
    {
        for (j = -(moitier_largeur+DISTANCE_POT_DE_FLEUR); j < moitier_largeur+DISTANCE_POT_DE_FLEUR; j++)
        {
            if (!(carte[centre.x+j][centre.y+i].decor == ' '))
            {
                obstacle++;
            }
        }
    }
    if (obstacle == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
