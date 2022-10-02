
#include "Header.h"

void lire_clavier(SDL_Event* event, int* touche_haut, int* touche_bas, int* touche_droite, int* touche_gauche, int* touche_interaction, int* touche_suicide)
{
    if (event->type == SDL_KEYDOWN)
    {
        switch (event->key.keysym.sym )
        {
            case TOUCHE_HAUT:
                *touche_haut = 1;
                break;
                
            case TOUCHE_BAS:
                *touche_bas = 1;
                break;
                
            case TOUCHE_DROITE:
                *touche_droite = 1;
                break;
                
            case TOUCHE_GAUCHE:
                *touche_gauche = 1;
                break;
                
            case TOUCHE_INTERACTION:
                *touche_interaction = 1;
                break;
                
            case TOUCHE_SUICIDE:
                *touche_suicide = 1;
                break;
                
            default:
                break;
        }
    }
    
    else if (event->type == SDL_KEYUP)
    {
        switch (event->key.keysym.sym )
        {
            case TOUCHE_HAUT:
                *touche_haut = 0;
                break;
                
            case TOUCHE_BAS:
                *touche_bas = 0;
                break;
                
            case TOUCHE_DROITE:
                *touche_droite = 0;
                break;
                
            case TOUCHE_GAUCHE:
                *touche_gauche = 0;
                break;
                
            case TOUCHE_INTERACTION:
                *touche_interaction = 0;
                break;
                
            case TOUCHE_SUICIDE:
                *touche_suicide = 0;
                break;
                
            default:
                break;
        }
    }
}
