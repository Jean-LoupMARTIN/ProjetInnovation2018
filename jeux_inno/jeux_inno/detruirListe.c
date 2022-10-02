
#include "Header.h"


void detruirListe(Liste_enemie *liste)
{
    int i, j = tailleListe(liste);
    
    for (i=0; i < j; i++)
    {
        suppression(liste, 0);
    }
}
