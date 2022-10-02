
#include "Header.h"

void afficher_mini_map(case_labyrinthe mini_map[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], SDL_Renderer *renderer, Hero perso)
{
    int i, j;
    int position_perso_laby_x = (perso.position.x + 4 - TAILLE_D_UN_CHUNK) / TAILLE_D_UN_CHUNK;
    int position_perso_laby_y = (perso.position.y + 4 - TAILLE_D_UN_CHUNK) / TAILLE_D_UN_CHUNK;
    SDL_Rect rectangle;
    SDL_Color noir = {0, 0, 0, 80};
    SDL_Color blanc = {255, 255, 255, 255};
    SDL_Color jaune = {255, 255, 0, 255};

    
    rectangle.x = MINI_MAP_X;
    rectangle.y = MINI_MAP_Y;
    rectangle.h = MINI_MAP_TAILLE;
    rectangle.w = MINI_MAP_TAILLE;
    
    SDL_SetRenderDrawColor(renderer, noir.r, noir.g, noir.b, noir.a);
    SDL_RenderFillRect(renderer, &rectangle);
    
    
    SDL_SetRenderDrawColor(renderer, blanc.r, blanc.g, blanc.b, blanc.a);

    for (i=0; i<TAILLE_LABYRINTHE; i++)
    {
        for (j=0; j<TAILLE_LABYRINTHE; j++)
        {
            if (mini_map[i][j].type_de_salle != 0)
            {
                if (mini_map[i][j].haut || mini_map[i-1][j].bas)
                {
                    rectangle.h = MINI_MAP_NOMBRE_PIXEL_CASE;
                    rectangle.w = MINI_MAP_LARGEUR_TUNNEL;
                    rectangle.x = MINI_MAP_X + MINI_MAP_NOMBRE_PIXEL_CASE / 2 + (j+1) * MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_LARGEUR_TUNNEL/2;
                    rectangle.y = MINI_MAP_Y + MINI_MAP_NOMBRE_PIXEL_CASE / 2 + i * MINI_MAP_NOMBRE_PIXEL_CASE;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                if (mini_map[i][j].bas || mini_map[i+1][j].haut)
                {
                    rectangle.h = MINI_MAP_NOMBRE_PIXEL_CASE;
                    rectangle.w = MINI_MAP_LARGEUR_TUNNEL;
                    rectangle.x = MINI_MAP_X + MINI_MAP_NOMBRE_PIXEL_CASE / 2 + (j+1) * MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_LARGEUR_TUNNEL/2;
                    rectangle.y = MINI_MAP_Y + MINI_MAP_NOMBRE_PIXEL_CASE / 2 + (i+1) * MINI_MAP_NOMBRE_PIXEL_CASE;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                if (mini_map[i][j].droite || mini_map[i][j+1].gauche)
                {
                    rectangle.h = MINI_MAP_LARGEUR_TUNNEL;
                    rectangle.w = MINI_MAP_NOMBRE_PIXEL_CASE;
                    rectangle.x = MINI_MAP_X + MINI_MAP_NOMBRE_PIXEL_CASE / 2 + (j+1) * MINI_MAP_NOMBRE_PIXEL_CASE;
                    rectangle.y = MINI_MAP_Y + MINI_MAP_NOMBRE_PIXEL_CASE / 2 + (i+1) * MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_LARGEUR_TUNNEL/2;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                if (mini_map[i][j].gauche || mini_map[i][j-1].droite)
                {
                    rectangle.h = MINI_MAP_LARGEUR_TUNNEL;
                    rectangle.w = MINI_MAP_NOMBRE_PIXEL_CASE;
                    rectangle.x = MINI_MAP_X + (MINI_MAP_NOMBRE_PIXEL_CASE) / 2 + j * MINI_MAP_NOMBRE_PIXEL_CASE;
                    rectangle.y = MINI_MAP_Y + MINI_MAP_NOMBRE_PIXEL_CASE / 2 + (i+1) * MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_LARGEUR_TUNNEL/2;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                
                if (mini_map[i][j].type_de_salle != 5 && mini_map[i][j].type_de_salle != 4)
                {
                    rectangle.h = MINI_MAP_NOMBRE_PIXEL_SALLE;
                    rectangle.w = MINI_MAP_NOMBRE_PIXEL_SALLE;
                    rectangle.x = MINI_MAP_X + (MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_NOMBRE_PIXEL_SALLE) / 2 + (j+1) * MINI_MAP_NOMBRE_PIXEL_CASE;
                    rectangle.y = MINI_MAP_Y + (MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_NOMBRE_PIXEL_SALLE) / 2 + (i+1) * MINI_MAP_NOMBRE_PIXEL_CASE;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
            }
        }
    }
    
    SDL_SetRenderDrawColor(renderer, jaune.r, jaune.g, jaune.b, jaune.a);
    rectangle.h = MINI_MAP_NOMBRE_PIXEL_SALLE;
    rectangle.w = MINI_MAP_NOMBRE_PIXEL_SALLE;
    rectangle.x = MINI_MAP_X + (MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_NOMBRE_PIXEL_SALLE) / 2 + (position_perso_laby_x+1) * MINI_MAP_NOMBRE_PIXEL_CASE;
    rectangle.y = MINI_MAP_Y + (MINI_MAP_NOMBRE_PIXEL_CASE - MINI_MAP_NOMBRE_PIXEL_SALLE) / 2 + (position_perso_laby_y+1) * MINI_MAP_NOMBRE_PIXEL_CASE;
    SDL_RenderFillRect(renderer, &rectangle);
}
