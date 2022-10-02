
#include "Header.h"

void copier_labyrinthe(case_labyrinthe labyrinthe_receveur[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], case_labyrinthe labyrinthe_donneur[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{
    int i, j;
    
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            labyrinthe_receveur[i][j] = labyrinthe_donneur[i][j];
        }
    }
}
