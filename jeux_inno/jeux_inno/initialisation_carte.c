
#include "Header.h"

void initialisation_carte(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE])
{
    int i, j;
    
    for (i = 0; i < TAILLE_CARTE; i++)
    {
        for (j = 0; j < TAILLE_CARTE; j++)
        {
            carte[i][j].decor = '.';
            
            carte[i][j].objet = '.';
            
            carte[i][j].perso = 0;
            
            carte[i][j].enemie = '.';
            
            carte[i][j].direction_enemie = '.';
            
            
            if (i == (TAILLE_CARTE - 1) / 2 &&
                j == (TAILLE_CARTE - 1) / 2)
            {
                carte[i][j].perso = 1;
            }
        }
    }
}
