
#include "Header.h"

int tailleListe(Liste_enemie *liste)
{
    Element *actuel = liste->premier;
    int taille = 0;
    
    while (actuel != NULL)
    {
        taille++;
        actuel = actuel->suivant;
    }
    
    return taille;
}

