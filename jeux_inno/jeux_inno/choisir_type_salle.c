
#include "Header.h"

void choisir_type_salle(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau)
{
    int i, j;
    long int salle_possible[NOMBRE_SALLE_POSSIBLE];
    int nombre_alea;
    int salle_choisi;


    salle_possible[0] = PROBA_SALLE_ALEA;
    salle_possible[1] = PROBA_SALLE_COFFRE;
    salle_possible[2] = PROBA_SALLE_PROLONGATION_COULOIR;
    salle_possible[3] = PROBA_SALLE_BEGNET;
    
    if (niveau >= NIVEAU_MIN_SALLE_HORDE)
    {
        salle_possible[4] = PROBA_SALLE_HORDE;
    }
    else
    {
        salle_possible[4] = 1000000;
    }
    
    
    if (niveau >= NIVEAU_MIN_SALLE_OMBRE)
    {
        salle_possible[5] = PROBA_SALLE_OMBRE;
    }
    else
    {
        salle_possible[5] = 1000000;
    }
    
    
    if (niveau >= NIVEAU_MIN_SALLE_LUTIN)
    {
        salle_possible[6] = PROBA_SALLE_LUTIN;
    }
    else
    {
        salle_possible[6] = 1000000;
    }
    
    if (niveau >= NIVEAU_MIN_SALLE_GOBLIN)
    {
        salle_possible[7] = PROBA_SALLE_GOBLIN;
    }
    else
    {
        salle_possible[7] = 1000000;
    }
    
    
    if (niveau >= NIVEAU_MIN_SALLE_DRAGON)
    {
        salle_possible[8] = PROBA_SALLE_DRAGON;
    }
    else
    {
        salle_possible[8] = 1000000;
    }


    
    labyrinthe[(TAILLE_LABYRINTHE - 1) / 2][(TAILLE_LABYRINTHE - 1) / 2].type_de_salle = 1;
    salle_arrivee_laby(labyrinthe);
    
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            if (labyrinthe[i][j].distance != -1 && labyrinthe[i][j].type_de_salle != 1 && labyrinthe[i][j].type_de_salle != 2)
            {
                nombre_alea = -1;
                salle_choisi = -1;
                
                while (nombre_alea != 0)
                {
                    nombre_alea = rand() % NOMBRE_SALLE_POSSIBLE;
                    salle_choisi = nombre_alea;
                    nombre_alea = rand() % salle_possible[nombre_alea];
                }
                
                switch (salle_choisi)
                {
                    case 0:
                        labyrinthe[i][j].type_de_salle = 3;
                        break;
                        
                    case 1:
                        labyrinthe[i][j].type_de_salle = 4;
                        break;
                        
                    case 2:
                        labyrinthe[i][j].type_de_salle = 5;
                        break;
                        
                    case 3:
                        labyrinthe[i][j].type_de_salle = 6;
                        break;
                        
                    case 4:
                        labyrinthe[i][j].type_de_salle = 7;
                        break;
                        
                    case 5:
                        labyrinthe[i][j].type_de_salle = 9;
                        break;
                        
                    case 6:
                        labyrinthe[i][j].type_de_salle = 10;
                        break;
                        
                    case 7:
                        labyrinthe[i][j].type_de_salle = 11;
                        break;
                        
                    case 8:
                        labyrinthe[i][j].type_de_salle = 8;
                        break;
                }
            }
        }
    }
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            if (labyrinthe[i][j].distance == 1)
            {
                labyrinthe[i][j].type_de_salle = 3;
            }
        }
    }
}
