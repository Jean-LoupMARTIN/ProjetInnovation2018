
#include "Header.h"

void modifier_carte(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE])
{
    int i, j;
    int nombre_alea;
    
    for (i=0; i<TAILLE_CARTE; i++)
    {
        for (j=0; j<TAILLE_CARTE; j++)
        {
            if (carte[i][j].decor == ' ')
            {
                nombre_alea = rand() % PROBA_ESPACE_4;
                if (nombre_alea == 0)
                {
                    carte[i][j].decor = ')';
                }
                nombre_alea = rand() % PROBA_ESPACE_3;
                if (nombre_alea == 0)
                {
                    carte[i][j].decor = '_';
                }
                nombre_alea = rand() % PROBA_ESPACE_2;
                if (nombre_alea == 0)
                {
                    carte[i][j].decor = '-';
                }
            }
            if (carte[i][j].decor == 'X')
            {
                nombre_alea = rand() % PROBA_MUR_2;
                if (nombre_alea == 0)
                {
                    carte[i][j].decor = 'x';
                }
            }
        }
    }
}

