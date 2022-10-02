
#include "Header.h"

void relier_salle(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{
    int i, j;
    int nombre_alea;
    
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            if (labyrinthe[i][j].distance != -1 && labyrinthe[i][j+1].distance != -1 && (labyrinthe[i][j+1].distance == labyrinthe[i][j].distance || labyrinthe[i][j+1].distance == labyrinthe[i][j].distance+1 || labyrinthe[i][j+1].distance == labyrinthe[i][j].distance-1) )
            {
                nombre_alea = rand() % PROBA_RELIER_SALLE;
                if (nombre_alea == 0)
                {
                    labyrinthe[i][j].droite = 1;
                }
            }
            if (labyrinthe[i][j].distance != -1 && labyrinthe[i+1][j].distance != -1 && (labyrinthe[i+1][j].distance == labyrinthe[i][j].distance || labyrinthe[i+1][j].distance == labyrinthe[i][j].distance+1 || labyrinthe[i+1][j].distance == labyrinthe[i][j].distance-1) )
            {
                nombre_alea = rand() % PROBA_RELIER_SALLE;
                if (nombre_alea == 0)
                {
                    labyrinthe[i][j].bas = 1;
                }
            }
            if (labyrinthe[i][j].distance != -1 && labyrinthe[i][j-1].distance != -1 && (labyrinthe[i][j-1].distance == labyrinthe[i][j].distance || labyrinthe[i][j-1].distance == labyrinthe[i][j].distance+1 || labyrinthe[i][j-1].distance == labyrinthe[i][j].distance-1) )
            {
                nombre_alea = rand() % PROBA_RELIER_SALLE;
                if (nombre_alea == 0)
                {
                    labyrinthe[i][j].gauche = 1;
                }
            }
            if (labyrinthe[i][j].distance != -1 && labyrinthe[i-1][j].distance != -1 && (labyrinthe[i-1][j].distance == labyrinthe[i][j].distance || labyrinthe[i-1][j].distance == labyrinthe[i][j].distance+1 || labyrinthe[i-1][j].distance == labyrinthe[i][j].distance-1) )
            {
                nombre_alea = rand() % PROBA_RELIER_SALLE;
                if (nombre_alea == 0)
                {
                    labyrinthe[i][j].haut = 1;
                }
            }
        }
    }
}
