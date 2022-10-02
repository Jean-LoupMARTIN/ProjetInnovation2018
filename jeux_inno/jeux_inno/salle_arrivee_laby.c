
#include "Header.h"

void salle_arrivee_laby(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{
    int i, j;
    int nombre_distance_plus_ou_egale_4 = 0;
    int courant_distance_plus_ou_egale_4;
    int numero_distance_alea;
    int salle_arrivee_valide = 0;
    
    for (i = 0;  i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0;  j < TAILLE_LABYRINTHE; j++)
        {
            if (labyrinthe[i][j].distance >= 4)
            {
                nombre_distance_plus_ou_egale_4++;
            }
        }
    }
    do {
        courant_distance_plus_ou_egale_4 = 0;
        
        numero_distance_alea = 1 + rand() % nombre_distance_plus_ou_egale_4;
        
        for (i = 0;  i < TAILLE_LABYRINTHE; i++)
        {
            for (j = 0;  j < TAILLE_LABYRINTHE; j++)
            {
                if (labyrinthe[i][j].distance >= 4)
                {
                    courant_distance_plus_ou_egale_4++;
                    
                    if (courant_distance_plus_ou_egale_4 == numero_distance_alea)
                    {
                        if (labyrinthe[i][j].haut == 0 && labyrinthe[i][j].droite == 0 && labyrinthe[i][j].bas == 0 && labyrinthe[i][j].gauche == 0)
                        {
                            labyrinthe[i][j].type_de_salle = 2;
                            salle_arrivee_valide = 1;
                        }
                    }
                }
            }
        }
    } while ( !(salle_arrivee_valide) );
}
