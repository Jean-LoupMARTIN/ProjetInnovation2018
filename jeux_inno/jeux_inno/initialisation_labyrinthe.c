
#include "Header.h"

void initialisation_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{
    int i, j;
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            labyrinthe[j][i].distance = -1;
            labyrinthe[j][i].haut = 0;
            labyrinthe[j][i].droite = 0;
            labyrinthe[j][i].bas = 0;
            labyrinthe[j][i].gauche = 0;
            labyrinthe[j][i].type_de_salle = 0;
        }
    }
    labyrinthe[(TAILLE_LABYRINTHE - 1) / 2][(TAILLE_LABYRINTHE - 1) / 2].distance = 0;
}
