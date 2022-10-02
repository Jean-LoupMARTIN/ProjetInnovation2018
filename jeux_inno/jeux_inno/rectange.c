
#include "Header.h"

void rectangle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element, char mode[20] ,int proba, char decor[20])
{
    int i, j;
    int nombre_alea;
    int moitie_hauteur = (hauteur-1)/2;
    int moitie_largeur = (largeur-1)/2;

    
    if (strcmp(mode, "contour") == 0)
    {
        for (i = 0; i < hauteur; i++)
        {
            for (j = 0; j < largeur; j++)
            {
                if (j == 0 || j == largeur-1 || i == 0  || i == hauteur-1)
                {
                    nombre_alea = rand() % proba;
                    
                    if (nombre_alea == 0)
                    {
                        if (strcmp(decor, "decor") == 0)
                        {
                            carte[centre.x - moitie_largeur + j][centre.y - moitie_hauteur + i].decor = element;
                        }
                        if (strcmp(decor, "objet") == 0)
                        {
                            carte[centre.x - moitie_largeur + j][centre.y - moitie_hauteur + i].objet = element;
                        }
                    }
                }
            }
        }
    }
    
    
    
    if (strcmp(mode, "rempli") == 0)
    {
        for (i = 0; i < hauteur; i++)
        {
            for (j = 0; j < largeur; j++)
            {
                nombre_alea = rand() % proba;
                
                if (nombre_alea == 0)
                {
                    if (strcmp(decor, "decor") == 0)
                    {
                        carte[centre.x - moitie_largeur + j][centre.y - moitie_hauteur + i].decor = element;
                    }
                    if (strcmp(decor, "objet") == 0)
                    {
                        carte[centre.x - moitie_largeur + j][centre.y - moitie_hauteur + i].objet = element;
                    }                    
                }
            }
        }
    }
}
