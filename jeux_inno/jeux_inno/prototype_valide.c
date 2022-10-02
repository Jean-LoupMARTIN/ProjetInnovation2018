
#include "Header.h"

int prototype_valide(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau)
{
    int i, j;
    int nombre_de_distance_egale_a_3 = 0;
    int nombre_de_distance_egale_a_4 = 0;
    int nombre_de_distance_egale_a_5 = 0;
    int nombre_de_distance_egale_a_6 = 0;
    int nombre_de_distance_egale_a_7 = 0;

    int nombre_min_de_distance_egale_a_3 = 0;
    int nombre_min_de_distance_egale_a_4 = 0;
    int nombre_min_de_distance_egale_a_5 = 0;
    int nombre_min_de_distance_egale_a_6 = 0;

    int erreur = 0;
    int salle_arrivee_possible = 0;
    
    if (niveau == 1)
    {
        nombre_min_de_distance_egale_a_3 = 3;
        nombre_min_de_distance_egale_a_4 = 2;
        nombre_min_de_distance_egale_a_5 = 1;
        nombre_min_de_distance_egale_a_6 = 0;
    }
    else if (niveau == 2)
    {
        nombre_min_de_distance_egale_a_3 = 4;
        nombre_min_de_distance_egale_a_4 = 3;
        nombre_min_de_distance_egale_a_5 = 2;
        nombre_min_de_distance_egale_a_6 = 1;
    }
    else if (niveau == 3)
    {
        nombre_min_de_distance_egale_a_3 = 6;
        nombre_min_de_distance_egale_a_4 = 5;
        nombre_min_de_distance_egale_a_5 = 4;
        nombre_min_de_distance_egale_a_6 = 3;
    }
    else if (niveau == 4)
    {
        nombre_min_de_distance_egale_a_3 = 6;
        nombre_min_de_distance_egale_a_4 = 5;
        nombre_min_de_distance_egale_a_5 = 5;
        nombre_min_de_distance_egale_a_6 = 4;
    }
    else if (niveau == 5)
    {
        nombre_min_de_distance_egale_a_3 = 6;
        nombre_min_de_distance_egale_a_4 = 6;
        nombre_min_de_distance_egale_a_5 = 6;
        nombre_min_de_distance_egale_a_6 = 6;
    }
    else
    {
        nombre_min_de_distance_egale_a_3 = 7;
        nombre_min_de_distance_egale_a_4 = 7;
        nombre_min_de_distance_egale_a_5 = 7;
        nombre_min_de_distance_egale_a_6 = 6;
    }
    
    
    
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            if (labyrinthe[i][j].distance == 3)
            {
                nombre_de_distance_egale_a_3++;
            }
            else if (labyrinthe[i][j].distance == 4)
            {
                nombre_de_distance_egale_a_4++;
            }
            else if (labyrinthe[i][j].distance == 5)
            {
                nombre_de_distance_egale_a_5++;
            }
            else if (labyrinthe[i][j].distance == 6)
            {
                nombre_de_distance_egale_a_6++;
            }
            else if (labyrinthe[i][j].distance == 7)
            {
                nombre_de_distance_egale_a_7++;
            }
        }
    }
    
    if (niveau == 1)
    {
        if (labyrinthe[(TAILLE_LABYRINTHE-1)/2][(TAILLE_LABYRINTHE-1)/2].haut + labyrinthe[(TAILLE_LABYRINTHE-1)/2][(TAILLE_LABYRINTHE-1)/2].droite + labyrinthe[(TAILLE_LABYRINTHE-1)/2][(TAILLE_LABYRINTHE-1)/2].bas + labyrinthe[(TAILLE_LABYRINTHE-1)/2][(TAILLE_LABYRINTHE-1)/2].gauche != 1)
        {
            erreur++;
        }
        
        if (nombre_de_distance_egale_a_6 > 0)
        {
            erreur++;
        }
    }
    
    if (niveau == 2)
    {
        if (nombre_de_distance_egale_a_7 > 0)
        {
            erreur++;
        }
    }
    
    for (i=0; i<TAILLE_LABYRINTHE; i++)
    {
        for (j=0; j<TAILLE_LABYRINTHE; j++)
        {
            if (labyrinthe[i][j].distance >= 4 && (labyrinthe[i][j].droite == 0 &&
                                                   labyrinthe[i][j].gauche == 0 &&
                                                   labyrinthe[i][j].haut == 0 &&
                                                   labyrinthe[i][j].bas == 0))
            {
                salle_arrivee_possible++;
            }
        }
    }
    
    if (nombre_de_distance_egale_a_3 < nombre_min_de_distance_egale_a_3 || nombre_de_distance_egale_a_4 < nombre_min_de_distance_egale_a_4 || nombre_de_distance_egale_a_5 < nombre_min_de_distance_egale_a_5 || nombre_de_distance_egale_a_6 < nombre_min_de_distance_egale_a_6)
    {
        erreur++;
    }

    if (erreur == 0 && salle_arrivee_possible > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
