
#include "Header.h"

void initialisation_textures(SDL_Renderer *renderer,
                             int biome,
                             SDL_Color *vide,
                             SDL_Texture **sol_1,
                             SDL_Texture **sol_2,
                             SDL_Texture **sol_3,
                             SDL_Texture **sol_4,
                             SDL_Texture **mur_1,
                             SDL_Texture **mur_2_1,
                             SDL_Texture **mur_2_2,
                             SDL_Texture **coffre,
                             SDL_Texture **coffre_ouvert,
                             SDL_Texture **echelle_depart,
                             SDL_Texture **echelle_arrivee,
                             SDL_Texture **arbre,
                             SDL_Texture **serveur,
                             SDL_Texture **tapi_1,
                             SDL_Texture **tapi_2,
                             SDL_Texture **pylone_1,
                             SDL_Texture **pylone_2,
                             SDL_Texture **coffre_legendaire,
                             SDL_Texture **coffre_legendaire_ouvert,
                             SDL_Texture **mur_pont,
                             SDL_Texture **sol_pont,
                             SDL_Texture **brique,
                             SDL_Texture **fleur,
                             
                             SDL_Texture **hero_avant,
                             SDL_Texture **hero_derriere,
                             SDL_Texture **hero_droite,
                             SDL_Texture **hero_gauche,
                             
                             SDL_Texture **garde_avant,
                             SDL_Texture **garde_derriere,
                             SDL_Texture **garde_droite,
                             SDL_Texture **garde_gauche,
                             
                             SDL_Texture **garde_elite_avant,
                             SDL_Texture **garde_elite_derriere,
                             SDL_Texture **garde_elite_droite,
                             SDL_Texture **garde_elite_gauche,
                             
                             SDL_Texture **slim_avant,
                             SDL_Texture **slim_derriere,
                             SDL_Texture **slim_droite,
                             SDL_Texture **slim_gauche,
                             
                             SDL_Texture **roi_slim_avant,
                             SDL_Texture **roi_slim_derriere,
                             SDL_Texture **roi_slim_droite,
                             SDL_Texture **roi_slim_gauche,
                             
                             SDL_Texture **minotaure_avant,
                             SDL_Texture **minotaure_derriere,
                             SDL_Texture **minotaure_droite,
                             SDL_Texture **minotaure_gauche,
                             
                             SDL_Texture **fantome_avant,
                             SDL_Texture **fantome_derriere,
                             SDL_Texture **fantome_droite,
                             SDL_Texture **fantome_gauche,
                             
                             SDL_Texture **liche_avant,
                             SDL_Texture **liche_derriere,
                             SDL_Texture **liche_droite,
                             SDL_Texture **liche_gauche,
                             
                             SDL_Texture **mage_glace_avant,
                             SDL_Texture **mage_glace_derriere,
                             SDL_Texture **mage_glace_droite,
                             SDL_Texture **mage_glace_gauche,
                             
                             SDL_Texture **gnome_lepreux_avant,
                             SDL_Texture **gnome_lepreux_derriere,
                             SDL_Texture **gnome_lepreux_droite,
                             SDL_Texture **gnome_lepreux_gauche,
                             
                             SDL_Texture **goblin_avant,
                             SDL_Texture **goblin_derriere,
                             SDL_Texture **goblin_droite,
                             SDL_Texture **goblin_gauche,
                             
                             SDL_Texture **dragon_avant,
                             SDL_Texture **dragon_derriere,
                             SDL_Texture **dragon_droite,
                             SDL_Texture **dragon_gauche,
                             
                             SDL_Texture **flamme_avant,
                             SDL_Texture **flamme_derriere,
                             SDL_Texture **flamme_droite,
                             SDL_Texture **flamme_gauche,
                             
                             SDL_Texture **lutin_avant,
                             SDL_Texture **lutin_derriere,
                             SDL_Texture **lutin_droite,
                             SDL_Texture **lutin_gauche
                             )

{
    SDL_Surface *surface = NULL;

    (*vide).r = 0;
    (*vide).g = 0;
    (*vide).b = 40;
    (*vide).a = 255;

    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/sol_1.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }

    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));

    *sol_1 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *sol_1)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/sol_2.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *sol_2 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *sol_2)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/sol_3.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *sol_3 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *sol_3)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/sol_4.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *sol_4 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *sol_4)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mur_1.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mur_1 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mur_1)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mur_2_1.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mur_2_1 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mur_2_1)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mur_2_2.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mur_2_2 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mur_2_2)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/coffre.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *coffre = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *coffre)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/coffre_ouvert.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *coffre_ouvert = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *coffre_ouvert)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/echelle_depart.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *echelle_depart = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *echelle_depart)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/echelle_arrivee.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *echelle_arrivee = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *echelle_arrivee)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/arbre.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *arbre = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *arbre)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/serveur.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *serveur = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *serveur)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/tapi_1.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *tapi_1 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *tapi_1)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/tapi_2.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *tapi_2 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *tapi_2)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/pylone_1.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *pylone_1 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *pylone_1)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/pylone_2.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *pylone_2 = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *pylone_2)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
  
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/coffre_legendaire.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *coffre_legendaire = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *coffre_legendaire)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/coffre_legendaire_ouvert.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *coffre_legendaire_ouvert = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *coffre_legendaire_ouvert)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mur_pont.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mur_pont = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mur_pont)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/sol_pont.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *sol_pont = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *sol_pont)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/brique.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *brique = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *brique)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/fleur.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *fleur = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *fleur)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/hero/hero_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *hero_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *hero_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/hero/hero_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *hero_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *hero_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/hero/hero_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *hero_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *hero_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/hero/hero_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *hero_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *hero_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde/garde_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde/garde_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }

    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde/garde_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde/garde_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde_elite/garde_elite_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_elite_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_elite_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde_elite/garde_elite_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_elite_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_elite_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde_elite/garde_elite_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_elite_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_elite_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/garde_elite/garde_elite_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *garde_elite_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *garde_elite_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/slim/slim_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *slim_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *slim_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/slim/slim_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *slim_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *slim_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/slim/slim_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *slim_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *slim_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/slim/slim_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *slim_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *slim_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }

    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/roi_slim/roi_slim_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *roi_slim_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *roi_slim_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/roi_slim/roi_slim_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *roi_slim_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *roi_slim_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/roi_slim/roi_slim_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *roi_slim_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *roi_slim_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/roi_slim/roi_slim_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *roi_slim_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *roi_slim_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }

    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/minotaure/minotaure_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *minotaure_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *minotaure_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/minotaure/minotaure_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *minotaure_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *minotaure_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/minotaure/minotaure_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *minotaure_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *minotaure_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/minotaure/minotaure_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *minotaure_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *minotaure_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/fantome/fantome_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *fantome_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *fantome_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/fantome/fantome_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *fantome_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *fantome_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/fantome/fantome_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *fantome_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *fantome_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/fantome/fantome_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *fantome_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *fantome_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }

    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/liche/liche_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *liche_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *liche_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/liche/liche_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *liche_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *liche_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/liche/liche_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *liche_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *liche_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/liche/liche_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *liche_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *liche_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }

    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mage_glace/mage_glace_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mage_glace_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mage_glace_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mage_glace/mage_glace_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mage_glace_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mage_glace_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mage_glace/mage_glace_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mage_glace_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mage_glace_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/mage_glace/mage_glace_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *mage_glace_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *mage_glace_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }

    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/gnome_lepreux/gnome_lepreux_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *gnome_lepreux_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *gnome_lepreux_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/gnome_lepreux/gnome_lepreux_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *gnome_lepreux_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *gnome_lepreux_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/gnome_lepreux/gnome_lepreux_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *gnome_lepreux_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *gnome_lepreux_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/gnome_lepreux/gnome_lepreux_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *gnome_lepreux_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *gnome_lepreux_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/goblin/goblin_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *goblin_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *goblin_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/goblin/goblin_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *goblin_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *goblin_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/goblin/goblin_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *goblin_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *goblin_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/goblin/goblin_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *goblin_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *goblin_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/dragon/dragon_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *dragon_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *dragon_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/dragon/dragon_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *dragon_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *dragon_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/dragon/dragon_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *dragon_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *dragon_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/dragon/dragon_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *dragon_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *dragon_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/flamme/flamme_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *flamme_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *flamme_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/flamme/flamme_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *flamme_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *flamme_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/flamme/flamme_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *flamme_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *flamme_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/flamme/flamme_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *flamme_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *flamme_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    
    
    
    
    
    
    
    
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/lutin/lutin_avant.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *lutin_avant = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *lutin_avant)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/lutin/lutin_derriere.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *lutin_derriere = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *lutin_derriere)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/lutin/lutin_droite.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *lutin_droite = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *lutin_droite)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }
    
    
    surface = SDL_LoadBMP("/Users/jean-loupmartin/Desktop/image_jeux_inno/espace/lutin/lutin_gauche.bmp");
    if(NULL == surface)
    {
        fprintf(stderr, "Erreur SDL_LoadBMP : %s\n\n", SDL_GetError());
    }
    SDL_SetColorKey(surface, SDL_RLEACCEL, SDL_MapRGB(surface->format, 255, 255, 255));
    
    *lutin_gauche = SDL_CreateTextureFromSurface(renderer, surface);
    if(NULL == *lutin_gauche)
    {
        fprintf(stderr, "Erreur SDL_CreateTextureFromSurface : %s\n\n", SDL_GetError());
    }


    
    
    
    
    
    
    
    
    SDL_FreeSurface(surface);
}
