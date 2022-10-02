
#include "Header.h"

void salle_pot_de_fleur(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element)
{
    int i, j;
    int moitier_hauteur = (hauteur-1)/2;
    int moitier_largeur = (largeur-1)/2;
    int nombre_alea;
    Coor pot_fleur;
    int hauteur_pot;
    int largeur_pot;
    
    nombre_alea = rand() % 2;
    if (nombre_alea == 0)
    {
        rectangle(carte, centre, hauteur-2, largeur-2, 'B', "rempli", SALLE_POT_DE_FLEUR_PROBA_CAISSE, "objet");
    }
    
    for (i = -(moitier_hauteur-2); i < moitier_hauteur-2; i++)
    {
        for (j = -(moitier_largeur-2); j < moitier_largeur-2; j++)
        {
            pot_fleur.x = centre.x + j;
            pot_fleur.y = centre.y + i;
            
            hauteur_pot = 3;
            largeur_pot = 3;
            
            nombre_alea = rand() % 2;
            switch (nombre_alea)
            {
                case 0:
                    hauteur_pot += 2 + 2*(rand() % VARIATION_TAILLE_POT_DE_FLEUR);
                    break;
                    
                case 1:
                    largeur_pot += 2 + 2*(rand() % VARIATION_TAILLE_POT_DE_FLEUR);
                    break;
                    
                default:
                    break;
            }
            
            if (place_suffisante_pot_fleur(carte, pot_fleur, hauteur_pot, largeur_pot))
            {
                nombre_alea = rand() % PROBA_POT_DE_FLEUR;
                
                if (nombre_alea == 0)
                {
                    rectangle(carte, pot_fleur, hauteur_pot, largeur_pot, 'X', "contour", 1, "decor");
                    rectangle(carte, pot_fleur, hauteur_pot, largeur_pot, '.', "rempli", 1, "objet");
                    rectangle(carte, pot_fleur, hauteur_pot-2, largeur_pot-2, 'F', "rempli", 1, "objet");
                }
            }
        }
    }
}
