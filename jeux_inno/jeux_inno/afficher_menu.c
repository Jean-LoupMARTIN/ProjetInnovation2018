
#include "Header.h"

void afficher_menu(SDL_Renderer *renderer, int* courant_curseur_1)
{
    SDL_Rect rectangle;
    SDL_Color noir = {0, 0, 0, 255};
    SDL_Color blanc = {255, 255, 255, 255};

    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.h = NOMBRE_PIXELS_CASE_HAUTEUR * HAUTEUR_AFFICHAGE;
    rectangle.w = NOMBRE_PIXELS_CASE_LARGEUR * LARGEUR_AFFICHAGE;
    SDL_SetRenderDrawColor(renderer, noir.r, noir.g, noir.b, noir.a);
    SDL_RenderFillRect(renderer, &rectangle);
    
    (*courant_curseur_1)++;
    
    if (*courant_curseur_1 == VITESSE_CLIGNOTEMENT_CURSEUR_MENU * 2)
    {
        *courant_curseur_1 = 0;
    }
    
    if (*courant_curseur_1 < VITESSE_CLIGNOTEMENT_CURSEUR_MENU)
    {
        rectangle.x = (NOMBRE_PIXEL_LARGEUR_MAC)/2 - (MENU_NOMBRE_PIXEL_LARGEUR_CURSEUR_1)/2;
        rectangle.y = (NOMBRE_PIXEL_HAUTEUR_MAC)/2 - (MENU_NOMBRE_PIXEL_HAUTEUR_CURSEUR_1)/2;
        rectangle.h = MENU_NOMBRE_PIXEL_HAUTEUR_CURSEUR_1;
        rectangle.w = MENU_NOMBRE_PIXEL_LARGEUR_CURSEUR_1;
        SDL_SetRenderDrawColor(renderer, blanc.r, blanc.g, blanc.b, blanc.a);
        SDL_RenderDrawRect(renderer, &rectangle);
    }
    else
    {
        rectangle.x = (NOMBRE_PIXEL_LARGEUR_MAC)/2 - (MENU_NOMBRE_PIXEL_LARGEUR_CURSEUR_2)/2;
        rectangle.y = (NOMBRE_PIXEL_HAUTEUR_MAC)/2 - (MENU_NOMBRE_PIXEL_HAUTEUR_CURSEUR_2)/2;
        rectangle.h = MENU_NOMBRE_PIXEL_HAUTEUR_CURSEUR_2;
        rectangle.w = MENU_NOMBRE_PIXEL_LARGEUR_CURSEUR_2;
        SDL_SetRenderDrawColor(renderer, blanc.r, blanc.g, blanc.b, blanc.a);
        SDL_RenderDrawRect(renderer, &rectangle);
    }
}
