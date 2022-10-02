
#include "Header.h"

SDL_Renderer* creation_zone_dessin(SDL_Window* fenetre)
{
    SDL_Renderer* renderer;
        
    renderer = SDL_CreateRenderer(fenetre,-1,SDL_RENDERER_ACCELERATED);
    if(NULL == renderer)
    {
        fprintf(stderr, "Erreur SDL_CreateRenderer : %s", SDL_GetError());
        SDL_Quit();
        exit(0);
    }
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
    
    return renderer;
}
