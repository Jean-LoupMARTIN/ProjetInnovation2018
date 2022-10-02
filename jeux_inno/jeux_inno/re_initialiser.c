
#include "Header.h"


void re_initialiser(Liste_enemie *liste)
{
    int i, j = tailleListe(liste);
    
    for (i=0; i < j; i++)
    {
        suppression(liste, 0);
    }
    
    liste = initialisation();
}
