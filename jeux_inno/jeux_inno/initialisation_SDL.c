
#include "Header.h"

void initialisation_SDL(void)
{
    if (0 != SDL_Init(SDL_INIT_VIDEO))
    {
        printf("erreur d'innisialisation");
        fprintf(stderr, "Erreur SDL_Init : %s", SDL_GetError());
        SDL_Quit();
        
        exit(0);
    }
}
