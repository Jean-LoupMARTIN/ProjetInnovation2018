
#include "Header.h"

SDL_Window* creation_de_la_fenetre(void)
{
    SDL_Window* fenetre;
    
    fenetre = SDL_CreateWindow("Jeux_inno", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 0, 0, SDL_WINDOW_FULLSCREEN_DESKTOP);
    if (NULL == fenetre)
    {
        fprintf(stderr, "Erreur SDL_CreateWindow : %s", SDL_GetError());
        SDL_Quit();
        exit(0);
    }
    return fenetre;
}
