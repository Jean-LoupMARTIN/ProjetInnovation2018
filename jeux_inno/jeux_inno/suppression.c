
#include "Header.h"


void suppression(Liste_enemie *liste, int place)
{
    if (place < 0 || place > tailleListe(liste)-1)
    {
        printf("suppression : err taille");
        exit(0);
    }
    
    else if (place == 0)
    {
        
            if (liste == NULL)
            {
                exit(EXIT_FAILURE);
            }
            
            if (liste->premier != NULL)
            {
                Element *aSupprimer = liste->premier;
                liste->premier = liste->premier->suivant;
                free(aSupprimer);
            }
    }
        
        
    else
    {
        Element *actuel = liste->premier;
        int i;
        Element *aSupprimer;
            
        for (i=0; i<place-1; i++)
        {
            actuel = actuel->suivant;
        }
            
        aSupprimer = actuel->suivant;
            
        actuel->suivant = actuel->suivant->suivant;
            
        free(aSupprimer);
    }
}
