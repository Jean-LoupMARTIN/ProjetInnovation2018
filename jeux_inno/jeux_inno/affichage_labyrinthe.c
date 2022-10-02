
#include "Header.h"

void affichage_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{
    printf("\n\n");
    int i, j;
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            printf("\t%d\t\t\t", labyrinthe[i][j].haut);
        }
        
        
        
        printf("\n");
        
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            printf("\t");
            
            if (i > 0)
            {
                if (labyrinthe[i-1][j].bas == 1 || labyrinthe[i][j].haut == 1)
                {
                    printf("|\t");
                }
                else
                {
                    printf("\t");
                }
                
                printf("\t\t");
            }
        }
        
        
        
        printf("\n");
        
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            printf("%d", labyrinthe[i][j].gauche);
            
            if (j > 0)
            {
                if (labyrinthe[i][j-1].droite == 1 || labyrinthe[i][j].gauche == 1)
                {
                    printf("---");
                }
                else
                {
                    printf("\t");
                }
            }
            else
            {
                printf("\t");
            }
            
            
            printf("%d", labyrinthe[i][j].type_de_salle);
            
            if (j < TAILLE_LABYRINTHE - 1)
            {
                if (labyrinthe[i][j].droite == 1 || labyrinthe[i][j+1].gauche == 1)
                {
                    printf("---");
                }
                else
                {
                    printf("\t");
                }
            }
            else
            {
                printf("\t");
            }
            
            printf("%d", labyrinthe[i][j].droite);

            
            
            
            if (j < TAILLE_LABYRINTHE - 1)
            {
                if (labyrinthe[i][j].droite == 1 || labyrinthe[i][j+1].gauche == 1)
                {
                    printf("-------");
                }
                else
                {
                    printf("\t\t");
                }
            }
            else
            {
                printf("\t\t");
            }
        }
        
        
        
        printf("\n");
        
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            printf("\t");
            
            if (i < TAILLE_LABYRINTHE - 1)
            {
                if (labyrinthe[i][j].bas == 1 || labyrinthe[i+1][j].haut == 1)
                {
                    printf("|\t");
                }
                else
                {
                    printf("\t");
                }
            }
            else
            {
                printf("\t");
            }
            
            printf("\t\t");
        }
        
        
        
        printf("\n");
        
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            printf("\t%d\t%d\t\t", labyrinthe[i][j].bas, labyrinthe[i][j].distance);
        }
        
        
        
        
        printf("\n");
        
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            printf("\t");
            
            if (i < TAILLE_LABYRINTHE-1)
            {
                if (labyrinthe[i][j].bas == 1 || labyrinthe[i+1][j].haut == 1)
                {
                    printf("|\t");
                }
                else
                {
                    printf("\t");
                }
                
                printf("\t\t");
            }
        }
        
        
        
        printf("\n");
        
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            printf("\t");
            
            if (i < TAILLE_LABYRINTHE - 1)
            {
                if (labyrinthe[i][j].bas == 1 || labyrinthe[i+1][j].haut == 1)
                {
                    printf("|\t");
                }
                else
                {
                    printf("\t");
                }

                printf("\t\t");
            }
        }
        
        printf("\n");
    }
    printf("\n\n\n\n");
}
