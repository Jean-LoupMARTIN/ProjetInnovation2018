
#include "Header.h"

void afficher_fenetre_image(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE],
                            Hero perso,
                            SDL_Renderer *renderer,
                            SDL_Color vide,
                            SDL_Texture *sol_1,
                            SDL_Texture *sol_2,
                            SDL_Texture *sol_3,
                            SDL_Texture *sol_4,
                            SDL_Texture *mur_1,
                            SDL_Texture *mur_2_1,
                            SDL_Texture *mur_2_2,
                            SDL_Texture *coffre,
                            SDL_Texture *coffre_ouvert,
                            SDL_Texture *echelle_depart,
                            SDL_Texture *echelle_arrivee,
                            SDL_Texture *arbre,
                            SDL_Texture *serveur,
                            SDL_Texture *tapi_1,
                            SDL_Texture *tapi_2,
                            SDL_Texture *pylone_1,
                            SDL_Texture *pylone_2,
                            SDL_Texture *coffre_legendaire,
                            SDL_Texture *coffre_legendaire_ouvert,
                            SDL_Texture *mur_pont,
                            SDL_Texture *sol_pont,
                            SDL_Texture *brique,
                            SDL_Texture *fleur,
                            
                            SDL_Texture *hero_avant,
                            SDL_Texture *hero_derriere,
                            SDL_Texture *hero_droite,
                            SDL_Texture *hero_gauche,
                            
                            SDL_Texture *garde_avant,
                            SDL_Texture *garde_derriere,
                            SDL_Texture *garde_droite,
                            SDL_Texture *garde_gauche,
                            
                            SDL_Texture *garde_elite_avant,
                            SDL_Texture *garde_elite_derriere,
                            SDL_Texture *garde_elite_droite,
                            SDL_Texture *garde_elite_gauche,
                            
                            SDL_Texture *slim_avant,
                            SDL_Texture *slim_derriere,
                            SDL_Texture *slim_droite,
                            SDL_Texture *slim_gauche,
                            
                            SDL_Texture *roi_slim_avant,
                            SDL_Texture *roi_slim_derriere,
                            SDL_Texture *roi_slim_droite,
                            SDL_Texture *roi_slim_gauche,
                            
                            SDL_Texture *minotaure_avant,
                            SDL_Texture *minotaure_derriere,
                            SDL_Texture *minotaure_droite,
                            SDL_Texture *minotaure_gauche,
                            
                            SDL_Texture *fantome_avant,
                            SDL_Texture *fantome_derriere,
                            SDL_Texture *fantome_droite,
                            SDL_Texture *fantome_gauche,
                            
                            SDL_Texture *liche_avant,
                            SDL_Texture *liche_derriere,
                            SDL_Texture *liche_droite,
                            SDL_Texture *liche_gauche,
                            
                            SDL_Texture *mage_glace_avant,
                            SDL_Texture *mage_glace_derriere,
                            SDL_Texture *mage_glace_droite,
                            SDL_Texture *mage_glace_gauche,
                            
                            SDL_Texture *gnome_lepreux_avant,
                            SDL_Texture *gnome_lepreux_derriere,
                            SDL_Texture *gnome_lepreux_droite,
                            SDL_Texture *gnome_lepreux_gauche,
                            
                            SDL_Texture *goblin_avant,
                            SDL_Texture *goblin_derriere,
                            SDL_Texture *goblin_droite,
                            SDL_Texture *goblin_gauche,
                            
                            SDL_Texture *dragon_avant,
                            SDL_Texture *dragon_derriere,
                            SDL_Texture *dragon_droite,
                            SDL_Texture *dragon_gauche,
                            
                            SDL_Texture *flamme_avant,
                            SDL_Texture *flamme_derriere,
                            SDL_Texture *flamme_droite,
                            SDL_Texture *flamme_gauche,
                            
                            SDL_Texture *lutin_avant,
                            SDL_Texture *lutin_derriere,
                            SDL_Texture *lutin_droite,
                            SDL_Texture *lutin_gauche
                            )
{
    int i, j;
    int nombre_alea;
    SDL_Rect rectangle;
    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.h = NOMBRE_PIXEL_HAUTEUR_MAC;
    rectangle.w = NOMBRE_PIXEL_LARGEUR_MAC;
    SDL_SetRenderDrawColor(renderer, vide.r, vide.g, vide.b, vide.a);
    SDL_RenderFillRect(renderer, &rectangle);
    
    
    
    rectangle.h = 64;
    rectangle.w = 32;
    
    for (i = - ((HAUTEUR_AFFICHAGE-1)/2 + perso.position.y); i < (HAUTEUR_AFFICHAGE-1)/2 + 2 + perso.position.y; i++)
    {
        for (j = -((LARGEUR_AFFICHAGE-1)/2 + perso.position.x); j < (LARGEUR_AFFICHAGE-1)/2 + 1 + perso.position.x; j++)
        {
            
            rectangle.x = (j - perso.position.x + (LARGEUR_AFFICHAGE-1)/2) * NOMBRE_PIXELS_CASE_LARGEUR;
            rectangle.y = (i - perso.position.y + (HAUTEUR_AFFICHAGE-1)/2) * NOMBRE_PIXELS_CASE_HAUTEUR ;
            
            
            switch (carte[j][i].decor)
            {
                case ' ':
                    SDL_RenderCopy(renderer, sol_1, NULL, &rectangle);
                    break;
                    
                case '-':
                    SDL_RenderCopy(renderer, sol_2, NULL, &rectangle);
                    break;
                    
                case '_':
                    SDL_RenderCopy(renderer, sol_3, NULL, &rectangle);
                    break;
                    
                case ')':
                    SDL_RenderCopy(renderer, sol_4, NULL, &rectangle);
                    break;
                    
                case 'X':
                    SDL_RenderCopy(renderer, mur_1, NULL, &rectangle);
                    break;
                    
                case 'x':
                    nombre_alea = rand() % 2;
                    if (nombre_alea == 0)
                    {
                        SDL_RenderCopy(renderer, mur_2_1, NULL, &rectangle);
                    }
                    else
                    {
                        SDL_RenderCopy(renderer, mur_2_2, NULL, &rectangle);
                    }
                    break;
                    
                case 't':
                    SDL_RenderCopy(renderer, tapi_1, NULL, &rectangle);
                    break;
                    
                case 'T':
                    SDL_RenderCopy(renderer, tapi_2, NULL, &rectangle);
                    break;
                    
                case 'e':
                    SDL_RenderCopy(renderer, echelle_depart, NULL, &rectangle);
                    break;
                    
                case ':':
                    SDL_RenderCopy(renderer, mur_pont, NULL, &rectangle);
                    break;
                    
                case '=':
                    SDL_RenderCopy(renderer, sol_pont, NULL, &rectangle);
                    break;
                    
                default:
                    break;
            }
            
            switch (carte[j][i].objet)
            {
                case 'E':
                    SDL_RenderCopy(renderer, echelle_arrivee, NULL, &rectangle);
                    break;
                    
                case 'C':
                    SDL_RenderCopy(renderer, coffre, NULL, &rectangle);
                    break;
                    
                case 'c':
                    SDL_RenderCopy(renderer, coffre_ouvert, NULL, &rectangle);
                    break;
                    
                case 'L':
                    SDL_RenderCopy(renderer, coffre_legendaire, NULL, &rectangle);
                    break;
                    
                case 'l':
                    SDL_RenderCopy(renderer, coffre_legendaire_ouvert, NULL, &rectangle);
                    break;
                    
                case 'A':
                    SDL_RenderCopy(renderer, arbre, NULL, &rectangle);
                    break;
                    
                case 'F':
                    SDL_RenderCopy(renderer, fleur, NULL, &rectangle);
                    break;
                    
                case 'S':
                    SDL_RenderCopy(renderer, serveur, NULL, &rectangle);
                    break;
                    
                case 'B':
                    SDL_RenderCopy(renderer, brique, NULL, &rectangle);
                    break;
                    
                case 'P':
                    nombre_alea = rand() % 2;
                    if (nombre_alea == 0)
                    {
                        SDL_RenderCopy(renderer, pylone_1, NULL, &rectangle);
                    }
                    else
                    {
                        SDL_RenderCopy(renderer, pylone_2, NULL, &rectangle);
                    }
                    break;
                    
                default:
                    break;
            }
            
            if (carte[j][i].perso == 1)
            {
                switch (perso.position.direction)
                {
                    case '^':
                        SDL_RenderCopy(renderer, hero_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, hero_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, hero_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, hero_gauche, NULL, &rectangle);
                        break;
                }
            }
            
            switch (carte[j][i].enemie)
            {
                case 'g':
                    switch (carte[j][i].direction_enemie)
                    {
                        case '^':
                            SDL_RenderCopy(renderer, garde_derriere, NULL, &rectangle);
                            break;
                            
                        case '>':
                            SDL_RenderCopy(renderer, garde_droite, NULL, &rectangle);
                            break;
                            
                        case 'v':
                            SDL_RenderCopy(renderer, garde_avant, NULL, &rectangle);
                            break;
                            
                        case '<':
                            SDL_RenderCopy(renderer, garde_gauche, NULL, &rectangle);
                            break;
                            
                        default:
                            break;
                    }
                    break;
                    
                case 'G':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, garde_elite_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, garde_elite_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, garde_elite_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, garde_elite_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'b':
                    SDL_RenderCopy(renderer, brique, NULL, &rectangle);
                    break;
                    
                case 'i':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, lutin_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, lutin_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, lutin_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, lutin_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 's':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, slim_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, slim_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, slim_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, slim_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'M':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, minotaure_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, minotaure_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, minotaure_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, minotaure_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'u':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, goblin_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, goblin_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, goblin_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, goblin_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'Z':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, roi_slim_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, roi_slim_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, roi_slim_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, roi_slim_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'n':
                    nombre_alea = rand() % PROBA_AFFICHAGE_FANTOME;
                    
                    if (nombre_alea == 0)
                    {
                        switch (carte[j][i].direction_enemie)
                        {
                            case '^':
                                SDL_RenderCopy(renderer, fantome_derriere, NULL, &rectangle);
                                break;
                                
                            case '>':
                                SDL_RenderCopy(renderer, fantome_droite, NULL, &rectangle);
                                break;
                                
                            case 'v':
                                SDL_RenderCopy(renderer, fantome_avant, NULL, &rectangle);
                                break;
                                
                            case '<':
                                SDL_RenderCopy(renderer, fantome_gauche, NULL, &rectangle);
                                break;
                                
                            default:
                                break;
                        }
                    }
                
                    break;
                    
                case 'N':
                    nombre_alea = rand() % PROBA_AFFICHAGE_LICHE;
                    
                    if (nombre_alea == 0)
                    {
                        switch (carte[j][i].direction_enemie)
                        {
                            case '^':
                                SDL_RenderCopy(renderer, liche_derriere, NULL, &rectangle);
                                break;
                                
                            case '>':
                                SDL_RenderCopy(renderer, liche_droite, NULL, &rectangle);
                                break;
                                
                            case 'v':
                                SDL_RenderCopy(renderer, liche_avant, NULL, &rectangle);
                                break;
                                
                            case '<':
                                SDL_RenderCopy(renderer, liche_gauche, NULL, &rectangle);
                                break;
                                
                            default:
                                break;
                        }
                    }
    
                    break;
                    
                case 'm':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, mage_glace_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, mage_glace_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, mage_glace_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, mage_glace_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'w':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, gnome_lepreux_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, gnome_lepreux_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, gnome_lepreux_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, gnome_lepreux_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'D':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, dragon_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, dragon_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, dragon_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, dragon_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                case 'd':
                    switch (carte[j][i].direction_enemie)
                {
                    case '^':
                        SDL_RenderCopy(renderer, flamme_derriere, NULL, &rectangle);
                        break;
                        
                    case '>':
                        SDL_RenderCopy(renderer, flamme_droite, NULL, &rectangle);
                        break;
                        
                    case 'v':
                        SDL_RenderCopy(renderer, flamme_avant, NULL, &rectangle);
                        break;
                        
                    case '<':
                        SDL_RenderCopy(renderer, flamme_gauche, NULL, &rectangle);
                        break;
                        
                    default:
                        break;
                }
                    break;
                    
                default:
                    break;
                    
            }
        }
    }
}
