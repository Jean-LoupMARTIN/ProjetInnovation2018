
#include "Header.h"

void afficher_vie_hero(SDL_Window* fenetre, SDL_Renderer *renderer, Hero perso)
{
    int i, j;
    Coeur coeurs[NOMBRE_LIGNE_MAX_COEUR][NOMBRE_COLONNE_MAX_COEUR];
    int nombre_coeur = 1 + (perso.vie-1) / 4;
    int nombre_quart_coeur_restant = perso.vie_courant;
    int nombre_pixel_separant_deux_coeur = NOMBRE_PIXELS_CASE * 3;

    SDL_Rect rectangle;
    SDL_Color rouge = {255, 0, 0, 255};
    SDL_Color noir = {0, 0, 0, 80};
    SDL_Color blanc = {255, 255, 255, 255};

    for (i=0; i < NOMBRE_LIGNE_MAX_COEUR; i++)
    {
        for (j=0; j < NOMBRE_COLONNE_MAX_COEUR; j++)
        {
            if (nombre_coeur - i * NOMBRE_COLONNE_MAX_COEUR - j > 0)
            {
                coeurs[i][j].debloque = 0;
                coeurs[i][j].haut_gauche = 0;
                coeurs[i][j].haut_droite = 0;
                coeurs[i][j].bas_droite = 0;
                coeurs[i][j].bas_gauche = 0;
            }
        }
    }
    
    for (i=0; i < NOMBRE_LIGNE_MAX_COEUR; i++)
    {
        for (j=0; j < NOMBRE_COLONNE_MAX_COEUR; j++)
        {
            if (nombre_coeur - i * NOMBRE_COLONNE_MAX_COEUR - j > 0)
            {
                coeurs[i][j].debloque = 1;
                
                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                rectangle.h = NOMBRE_PIXELS_CASE*2;
                rectangle.w = NOMBRE_PIXELS_CASE*2;
                SDL_SetRenderDrawColor(renderer, noir.r, noir.g, noir.b, noir.a);
                SDL_RenderFillRect(renderer, &rectangle);
                
                rectangle.h = NOMBRE_PIXELS_CASE;
                rectangle.w = NOMBRE_PIXELS_CASE;
                SDL_SetRenderDrawColor(renderer, rouge.r, rouge.g, rouge.b, rouge.a);

                if (nombre_quart_coeur_restant > 0)
                {
                    coeurs[i][j].haut_gauche = 1;
                    nombre_quart_coeur_restant--;
                    
                    rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                    rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                if (nombre_quart_coeur_restant > 0)
                {
                    coeurs[i][j].bas_gauche = 1;
                    nombre_quart_coeur_restant--;
                    
                    rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                    rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                if (nombre_quart_coeur_restant > 0)
                {
                    coeurs[i][j].bas_droite = 1;
                    nombre_quart_coeur_restant--;
                    
                    rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
                    rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                if (nombre_quart_coeur_restant > 0)
                {
                    coeurs[i][j].haut_gauche = 1;
                    nombre_quart_coeur_restant--;
                    
                    rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
                    rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                    SDL_RenderFillRect(renderer, &rectangle);
                }
                
                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
                rectangle.h = NOMBRE_PIXELS_CASE*2;
                rectangle.w = NOMBRE_PIXELS_CASE*2;
                
                SDL_SetRenderDrawColor(renderer, blanc.r, blanc.g, blanc.b, blanc.a);
                SDL_RenderDrawRect(renderer, &rectangle);
            }
        }
    }
//    int nombre_coeur = 1 + (perso.vie-1) / 4;
//    int nombre_quart_coeur_restant = perso.vie_courant;
//
//    int coeur[NOMBRE_LIGNE_MAX_COEUR][NOMBRE_COLONNE_MAX_COEUR];
//    Coeur coeur_restant[NOMBRE_LIGNE_MAX_COEUR][NOMBRE_COLONNE_MAX_COEUR];
//
//
//    for (i=0; i < NOMBRE_LIGNE_MAX_COEUR; i++)
//    {
//        for (j=0; j < NOMBRE_COLONNE_MAX_COEUR; j++)
//        {
//            if (nombre_coeur - i * NOMBRE_COLONNE_MAX_COEUR - j > 0)
//            {
//                coeur[i][j] = 1;
//            }
//            else
//            {
//                coeur[i][j] = 0;
//            }
//
//            if (coeur[i][j] == 1)
//            {
//                if ( (i * NOMBRE_COLONNE_MAX_COEUR + j + 1)*4 < nombre_quart_coeur_restant)
//                {
//                    coeur_restant[i][j].haut_droite = 1;
//                    coeur_restant[i][j].haut_gauche = 1;
//                    coeur_restant[i][j].bas_gauche = 1;
//                    coeur_restant[i][j].bas_droite = 1;
//                }
//                else if ( (i * NOMBRE_COLONNE_MAX_COEUR + j + 1)*4 < nombre_quart_coeur_restant + 4)
//                {
//                    if (nombre_quart_coeur_restant % 4 == 0)
//                    {
//                        coeur_restant[i][j].haut_droite = 1;
//                        coeur_restant[i][j].haut_gauche = 1;
//                        coeur_restant[i][j].bas_gauche = 1;
//                        coeur_restant[i][j].bas_droite = 1;
//                    }
//                    else if (nombre_quart_coeur_restant % 4 == 3)
//                    {
//                        coeur_restant[i][j].haut_droite = 0;
//                        coeur_restant[i][j].haut_gauche = 1;
//                        coeur_restant[i][j].bas_gauche = 1;
//                        coeur_restant[i][j].bas_droite = 1;
//                    }
//                    else if (nombre_quart_coeur_restant % 4 == 2)
//                    {
//                        coeur_restant[i][j].haut_droite = 0;
//                        coeur_restant[i][j].haut_gauche = 1;
//                        coeur_restant[i][j].bas_gauche = 1;
//                        coeur_restant[i][j].bas_droite = 0;
//                    }
//                    else
//                    {
//                        coeur_restant[i][j].haut_droite = 0;
//                        coeur_restant[i][j].haut_gauche = 1;
//                        coeur_restant[i][j].bas_gauche = 0;
//                        coeur_restant[i][j].bas_droite = 0;
//                    }
//                }
//            }
//            else
//            {
//                coeur_restant[i][j].haut_droite = 0;
//                coeur_restant[i][j].haut_gauche = 0;
//                coeur_restant[i][j].bas_gauche = 0;
//                coeur_restant[i][j].bas_droite = 0;
//
//            }
//        }
//    }
//
//    for (i=0; i < NOMBRE_LIGNE_MAX_COEUR; i++)
//    {
//        for (j=0; j < NOMBRE_COLONNE_MAX_COEUR; j++)
//        {
//            if (coeurs[i][j].debloque)
//            {
//                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.h = NOMBRE_PIXELS_CASE*2;
//                rectangle.w = NOMBRE_PIXELS_CASE*2;
//
//                SDL_SetRenderDrawColor(renderer, noir.r, noir.g, noir.b, noir.a);
//                SDL_RenderFillRect(renderer, &rectangle);
//            }
//
//
//            if (coeurs[i][j].haut_gauche == 1)
//            {
//                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.h = NOMBRE_PIXELS_CASE;
//                rectangle.w = NOMBRE_PIXELS_CASE;
//
//                SDL_SetRenderDrawColor(renderer, rouge.r, rouge.g, rouge.b, rouge.a);
//                SDL_RenderFillRect(renderer, &rectangle);
//            }
//            if (coeurs[i][j].haut_droite == 1)
//            {
//                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
//                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.h = NOMBRE_PIXELS_CASE;
//                rectangle.w = NOMBRE_PIXELS_CASE;
//
//                SDL_SetRenderDrawColor(renderer, rouge.r, rouge.g, rouge.b, rouge.a);
//                SDL_RenderFillRect(renderer, &rectangle);
//            }
//            if (coeurs[i][j].bas_droite == 1)
//            {
//                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
//                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
//                rectangle.h = NOMBRE_PIXELS_CASE;
//                rectangle.w = NOMBRE_PIXELS_CASE;
//
//                SDL_SetRenderDrawColor(renderer, rouge.r, rouge.g, rouge.b, rouge.a);
//                SDL_RenderFillRect(renderer, &rectangle);
//            }
//            if (coeurs[i][j].bas_gauche == 1)
//            {
//                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE*2;
//                rectangle.h = NOMBRE_PIXELS_CASE;
//                rectangle.w = NOMBRE_PIXELS_CASE;
//
//                SDL_SetRenderDrawColor(renderer, rouge.r, rouge.g, rouge.b, rouge.a);
//                SDL_RenderFillRect(renderer, &rectangle);
//            }
//
//
//            if (coeurs[i][j].debloque)
//            {
//                rectangle.x = (j) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.y = (i) * nombre_pixel_separant_deux_coeur + NOMBRE_PIXELS_CASE;
//                rectangle.h = NOMBRE_PIXELS_CASE*2;
//                rectangle.w = NOMBRE_PIXELS_CASE*2;
//
//                SDL_SetRenderDrawColor(renderer, blanc.r, blanc.g, blanc.b, blanc.a);
//                SDL_RenderDrawRect(renderer, &rectangle);
//            }
//        }
//    }
}
