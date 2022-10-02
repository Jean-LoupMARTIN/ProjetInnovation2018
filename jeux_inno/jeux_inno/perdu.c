
#include "Header.h"

void perdu(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Hero perso, int* menu, int* jouer, int* touche_interaction, SDL_Renderer *renderer, int* perdu, int touche_suicide)
{
    SDL_Rect rectangle;

    if ( (obstacle(carte, perso.position.x-1, perso.position.y) &&
          obstacle(carte, perso.position.x+1, perso.position.y) &&
          obstacle(carte, perso.position.x, perso.position.y-1) &&
          obstacle(carte, perso.position.x, perso.position.y+1) ) ||
        touche_suicide ||
        enemie_danger(carte, perso))
    {
        if ( (*perdu) + VITESSE_MORT <= 255 )
        {
            (*perdu) += VITESSE_MORT;
        }
        else
        {
            (*perdu)++;;
        }
    }
    else
    {
        if ((*perdu) > 0)
        {
            if ((*perdu) >= VITESSE_REGENERATION)
            {
                (*perdu) -= VITESSE_REGENERATION;
            }
            else
            {
                (*perdu)--;
            }
        }
    }
    if (*perdu >= DUREE_AVANT_MORT)
    {
        *jouer = 0;
        *menu = 1;
        *touche_interaction = 0;
    }
    
    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.h = NOMBRE_PIXELS_CASE_HAUTEUR * HAUTEUR_AFFICHAGE;
    rectangle.w = NOMBRE_PIXELS_CASE_LARGEUR * LARGEUR_AFFICHAGE;
    SDL_SetRenderDrawColor( renderer, 0, 0, 0, 0 + (*perdu));
    SDL_RenderFillRect(renderer, &rectangle);
}
