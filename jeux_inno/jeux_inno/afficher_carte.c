
#include "Header.h"

void afficher_carte(char carte[TAILLE_CARTE][TAILLE_CARTE], char carte_objet[TAILLE_CARTE][TAILLE_CARTE], Coor perso)
{
    int i, j;
    Coor aff_coin_haut_gauche;
    
    aff_coin_haut_gauche.x = perso.x - (LARGEUR_AFFICHAGE - 1) / 2;
    aff_coin_haut_gauche.y = perso.y - (HAUTEUR_AFFICHAGE - 1) / 2;
    
    // On affiche la carte "terrain"
    for (i = 0; i < HAUTEUR_AFFICHAGE; i++)
    {
        printf("\n");

        for (j = 0; j < HAUTEUR_AFFICHAGE; j++)
        {
            if (perso.x == aff_coin_haut_gauche.x + j && perso.y == aff_coin_haut_gauche.y + i)
            {
                printf("%c ", perso.direction);
            }
            else
            {
                printf("%c ", carte[aff_coin_haut_gauche.x + j][aff_coin_haut_gauche.y + i]);
            }
        }
    }
    
    // On affiche la carte objet
    for (i = 0; i < HAUTEUR_AFFICHAGE; i++)
    {
        printf("\n");
        
        for (j = 0; j < HAUTEUR_AFFICHAGE; j++)
        {
            if ( !(perso.x == aff_coin_haut_gauche.x + j && perso.y == aff_coin_haut_gauche.y + i) && carte_objet[aff_coin_haut_gauche.x + j][aff_coin_haut_gauche.y + i] != '.' && carte_objet[aff_coin_haut_gauche.x + j][aff_coin_haut_gauche.y + i] != '+' && carte_objet[aff_coin_haut_gauche.x + j][aff_coin_haut_gauche.y + i] != 'H')
            {
                printf("%c ", carte_objet[aff_coin_haut_gauche.x + j][aff_coin_haut_gauche.y + i]);
            }
        }
    }
}
