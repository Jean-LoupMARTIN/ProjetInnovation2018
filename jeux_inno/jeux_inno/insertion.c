
#include "Header.h"


void insertion(Liste_enemie *liste, int place, Enemie enemie)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    
    if (place < 0 || place > tailleListe(liste))
    {
        printf("insertion : err taille");
        exit(0);
    }
    
    else if (place == 0)
    {
        if (liste == NULL || nouveau == NULL)
        {
            exit(EXIT_FAILURE);
        }
        nouveau->enemie = enemie;
        
        /* Insertion de l'élément au début de la liste */
        nouveau->suivant = liste->premier;
        liste->premier = nouveau;
    }
    
    else
    {
        Element *actuel = liste->premier;
        int i;
        
        for (i=0; i < place-1; i++)
        {
            actuel=actuel->suivant;
        }

        nouveau->suivant = actuel->suivant;

        nouveau->enemie = enemie;
        
        actuel->suivant = nouveau;
    }
}


