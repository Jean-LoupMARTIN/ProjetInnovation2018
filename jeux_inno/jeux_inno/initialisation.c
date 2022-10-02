
#include "Header.h"


Liste_enemie *initialisation(void)
{
    Liste_enemie *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));
    
    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }
    element->enemie.apparence = ' ';
    element->enemie.intelligence = -1;
    element->enemie.charge = 0;
    element->enemie.discretion = 0;
    element->enemie.vitesse = 1;
    element->enemie.vision = 0;
    element->enemie.position.x = 0;
    element->enemie.position.y = 0;
    element->enemie.position.direction = ' ';

    element->suivant = NULL;
    
    liste->premier = element;
    
    return liste;
}

