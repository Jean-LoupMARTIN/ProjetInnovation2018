
#include "Header.h"

int main(void)
{
    initialisation_SDL();
    initialisation_rand();
    

    
    Case_carte carte[TAILLE_CARTE][TAILLE_CARTE];
    Liste_enemie* enemies = initialisation();
    case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE];
    Coor centre_labyrinthe;
        centre_labyrinthe.x = (TAILLE_LABYRINTHE - 1) / 2;
        centre_labyrinthe.y = (TAILLE_LABYRINTHE - 1) / 2;
    case_labyrinthe mini_map[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE];
    Hero perso;
        perso.position.direction = 'v';
        perso.gel = 0;
    SDL_Event event;
    SDL_Window* fenetre = creation_de_la_fenetre();
    SDL_Renderer *renderer = creation_zone_dessin(fenetre);
    

    int niveau = 0;
    int score = 0;
    int continuer = 1;
    int creer_nouv_laby = 0;
    int biome = 0;
    int menu = 1;
    int jouer = 0;
    int courant_curseur_1 = 0;
    int courant_perdu = DUREE_AVANT_MORT - 1;
    int touche_haut = 0;
    int touche_bas = 0;
    int touche_droite = 0;
    int touche_gauche = 0;
    int touche_interaction = 0;
    int touche_suicide = 0;
    
        
    SDL_Texture *sol_1 = NULL;
    SDL_Texture *sol_2 = NULL;
    SDL_Texture *sol_3 = NULL;
    SDL_Texture *sol_4 = NULL;
    SDL_Texture *mur_1 = NULL;
    SDL_Texture *mur_2_1 = NULL;
    SDL_Texture *mur_2_2 = NULL;
    SDL_Texture *coffre = NULL;
    SDL_Texture *coffre_ouvert = NULL;
    SDL_Texture *echelle_depart = NULL;
    SDL_Texture *echelle_arrivee = NULL;
    SDL_Texture *arbre = NULL;
    SDL_Texture *serveur = NULL;
    SDL_Texture *tapi_1 = NULL;
    SDL_Texture *tapi_2 = NULL;
    SDL_Texture *pylone_1 = NULL;
    SDL_Texture *pylone_2 = NULL;
    SDL_Texture *coffre_legendaire = NULL;
    SDL_Texture *coffre_legendaire_ouvert = NULL;
    SDL_Texture *mur_pont = NULL;
    SDL_Texture *sol_pont = NULL;
    SDL_Texture *brique = NULL;
    SDL_Texture *fleur = NULL;
    
    SDL_Texture *hero_avant = NULL;
    SDL_Texture *hero_derriere = NULL;
    SDL_Texture *hero_droite = NULL;
    SDL_Texture *hero_gauche = NULL;
    
    SDL_Texture *garde_avant = NULL;
    SDL_Texture *garde_derriere = NULL;
    SDL_Texture *garde_droite = NULL;
    SDL_Texture *garde_gauche = NULL;

    SDL_Texture *garde_elite_avant = NULL;
    SDL_Texture *garde_elite_derriere = NULL;
    SDL_Texture *garde_elite_droite = NULL;
    SDL_Texture *garde_elite_gauche = NULL;

    SDL_Texture *slim_avant = NULL;
    SDL_Texture *slim_derriere = NULL;
    SDL_Texture *slim_droite = NULL;
    SDL_Texture *slim_gauche = NULL;

    SDL_Texture *roi_slim_avant = NULL;
    SDL_Texture *roi_slim_derriere = NULL;
    SDL_Texture *roi_slim_droite = NULL;
    SDL_Texture *roi_slim_gauche = NULL;

    SDL_Texture *minotaure_avant = NULL;
    SDL_Texture *minotaure_derriere = NULL;
    SDL_Texture *minotaure_droite = NULL;
    SDL_Texture *minotaure_gauche = NULL;

    SDL_Texture *fantome_avant = NULL;
    SDL_Texture *fantome_derriere = NULL;
    SDL_Texture *fantome_droite = NULL;
    SDL_Texture *fantome_gauche = NULL;

    SDL_Texture *liche_avant = NULL;
    SDL_Texture *liche_derriere = NULL;
    SDL_Texture *liche_droite = NULL;
    SDL_Texture *liche_gauche = NULL;

    SDL_Texture *mage_glace_avant = NULL;
    SDL_Texture *mage_glace_derriere = NULL;
    SDL_Texture *mage_glace_droite = NULL;
    SDL_Texture *mage_glace_gauche = NULL;

    SDL_Texture *gnome_lepreux_avant = NULL;
    SDL_Texture *gnome_lepreux_derriere = NULL;
    SDL_Texture *gnome_lepreux_droite = NULL;
    SDL_Texture *gnome_lepreux_gauche = NULL;

    SDL_Texture *goblin_avant = NULL;
    SDL_Texture *goblin_derriere = NULL;
    SDL_Texture *goblin_droite = NULL;
    SDL_Texture *goblin_gauche = NULL;

    SDL_Texture *dragon_avant = NULL;
    SDL_Texture *dragon_derriere = NULL;
    SDL_Texture *dragon_droite = NULL;
    SDL_Texture *dragon_gauche = NULL;

    SDL_Texture *flamme_avant = NULL;
    SDL_Texture *flamme_derriere = NULL;
    SDL_Texture *flamme_droite = NULL;
    SDL_Texture *flamme_gauche = NULL;

    SDL_Texture *lutin_avant = NULL;
    SDL_Texture *lutin_derriere = NULL;
    SDL_Texture *lutin_droite = NULL;
    SDL_Texture *lutin_gauche = NULL;


    SDL_Color vide;
    vide.r = 0;
    vide.g = 0;
    vide.b = 0;
    vide.a = 0;



//    SDL_RenderCopy(renderer, texture, NULL, &rectangle);
//    
//    SDL_RenderPresent(renderer);
//
//    SDL_Delay(2000);
//
//    SDL_DestroyTexture(texture);
//    SDL_FreeSurface(surface);
//    SDL_SetRenderTarget(renderer, NULL); /* La cible de rendu est de nouveau le renderer. */
//    /* On peut maintenant dessiner sur notre texture */



    
    while (continuer)
    {
        SDL_Delay(26);
        SDL_RenderPresent(renderer);
        
        if (menu)
        {
            afficher_menu(renderer, &courant_curseur_1);
            
            while(SDL_PollEvent(&event))
            {
                if (event.type == SDL_QUIT)
                {
                    continuer = 0;
                }
                
                else if (event.type == SDL_KEYDOWN || event.type == SDL_KEYUP)
                {
                    lire_clavier(&event, &touche_haut, &touche_bas, &touche_droite, &touche_gauche, &touche_interaction, &touche_suicide);
                }
            }
            
            if (touche_interaction)
            {
                menu = 0;
                jouer = 1;
                creer_nouv_laby = 1;
                score = 0;
                niveau = NIVEAU_DEPART;
                touche_haut = 0;
                touche_bas = 0;
                touche_droite = 0;
                touche_gauche = 0;
                biome = rand() % NOMBRE_BIOME;
                
                initialisation_textures(renderer,
                                        biome,
                                        &vide,
                                        &sol_1,
                                        &sol_2,
                                        &sol_3,
                                        &sol_4,
                                        &mur_1,
                                        &mur_2_1,
                                        &mur_2_2,
                                        &coffre,
                                        &coffre_ouvert,
                                        &echelle_depart,
                                        &echelle_arrivee,
                                        &arbre,
                                        &serveur,
                                        &tapi_1,
                                        &tapi_2,
                                        &pylone_1,
                                        &pylone_2,
                                        &coffre_legendaire,
                                        &coffre_legendaire_ouvert,
                                        &mur_pont,
                                        &sol_pont,
                                        &brique,
                                        &fleur,
                                        
                                        &hero_avant,
                                        &hero_derriere,
                                        &hero_droite,
                                        &hero_gauche,
                                        
                                        &garde_avant,
                                        &garde_derriere,
                                        &garde_droite,
                                        &garde_gauche,
                                        
                                        &garde_elite_avant,
                                        &garde_elite_derriere,
                                        &garde_elite_droite,
                                        &garde_elite_gauche,

                                        &slim_avant,
                                        &slim_derriere,
                                        &slim_droite,
                                        &slim_gauche,

                                        &roi_slim_avant,
                                        &roi_slim_derriere,
                                        &roi_slim_droite,
                                        &roi_slim_gauche,

                                        &minotaure_avant,
                                        &minotaure_derriere,
                                        &minotaure_droite,
                                        &minotaure_gauche,

                                        &fantome_avant,
                                        &fantome_derriere,
                                        &fantome_droite,
                                        &fantome_gauche,

                                        &liche_avant,
                                        &liche_derriere,
                                        &liche_droite,
                                        &liche_gauche,

                                        &mage_glace_avant,
                                        &mage_glace_derriere,
                                        &mage_glace_droite,
                                        &mage_glace_gauche,

                                        &gnome_lepreux_avant,
                                        &gnome_lepreux_derriere,
                                        &gnome_lepreux_droite,
                                        &gnome_lepreux_gauche,

                                        &goblin_avant,
                                        &goblin_derriere,
                                        &goblin_droite,
                                        &goblin_gauche,

                                        &dragon_avant,
                                        &dragon_derriere,
                                        &dragon_droite,
                                        &dragon_gauche,

                                        &flamme_avant,
                                        &flamme_derriere,
                                        &flamme_droite,
                                        &flamme_gauche,

                                        &lutin_avant,
                                        &lutin_derriere,
                                        &lutin_droite,
                                        &lutin_gauche
                                        );
            }
        }
        
        if (jouer)
        {
            if (creer_nouv_laby == 1)
            {
                perso.position.x = (TAILLE_CARTE - 1) / 2;
                perso.position.y = (TAILLE_CARTE - 1) / 2;
                creation_labyrinthe(labyrinthe, niveau);
                affichage_labyrinthe(labyrinthe);
                re_initialiser(enemies);
                creation_de_la_carte(carte, enemies ,labyrinthe, niveau, perso.position);
                initialisation_labyrinthe(mini_map);
                creer_nouv_laby = 0;
            }
        
//            afficher_fenetre(carte, perso, renderer, biome);
            
            afficher_fenetre_image(carte,
                                   perso,
                                   renderer,
                                   vide,
                                   sol_1,
                                   sol_2,
                                   sol_3,
                                   sol_4,
                                   mur_1,
                                   mur_2_1,
                                   mur_2_2,
                                   coffre,
                                   coffre_ouvert,
                                   echelle_depart,
                                   echelle_arrivee,
                                   arbre,
                                   serveur,
                                   tapi_1,
                                   tapi_2,
                                   pylone_1,
                                   pylone_2,
                                   coffre_legendaire,
                                   coffre_legendaire_ouvert,
                                   mur_pont,
                                   sol_pont,
                                   brique,
                                   fleur,
                                   
                                   hero_avant,
                                   hero_derriere,
                                   hero_droite,
                                   hero_gauche,
                                   
                                   garde_avant,
                                   garde_derriere,
                                   garde_droite,
                                   garde_gauche,
                                   
                                   garde_elite_avant,
                                   garde_elite_derriere,
                                   garde_elite_droite,
                                   garde_elite_gauche,
                                   
                                   slim_avant,
                                   slim_derriere,
                                   slim_droite,
                                   slim_gauche,

                                   roi_slim_avant,
                                   roi_slim_derriere,
                                   roi_slim_droite,
                                   roi_slim_gauche,

                                   minotaure_avant,
                                   minotaure_derriere,
                                   minotaure_droite,
                                   minotaure_gauche,

                                   fantome_avant,
                                   fantome_derriere,
                                   fantome_droite,
                                   fantome_gauche,

                                   liche_avant,
                                   liche_derriere,
                                   liche_droite,
                                   liche_gauche,

                                   mage_glace_avant,
                                   mage_glace_derriere,
                                   mage_glace_droite,
                                   mage_glace_gauche,

                                   gnome_lepreux_avant,
                                   gnome_lepreux_derriere,
                                   gnome_lepreux_droite,
                                   gnome_lepreux_gauche,

                                   goblin_avant,
                                   goblin_derriere,
                                   goblin_droite,
                                   goblin_gauche,

                                   dragon_avant,
                                   dragon_derriere,
                                   dragon_droite,
                                   dragon_gauche,

                                   flamme_avant,
                                   flamme_derriere,
                                   flamme_droite,
                                   flamme_gauche,

                                   lutin_avant,
                                   lutin_derriere,
                                   lutin_droite,
                                   lutin_gauche
                                   );
            
            modifier_mini_map(labyrinthe, perso, mini_map);
            afficher_mini_map(mini_map, renderer, perso);
            
            if (strcmp(MODE_DE_DEPLACEMENT, "fantome") != 0)
            {
                perdu(carte, perso, &menu, &jouer, &touche_interaction, renderer, &courant_perdu, touche_suicide);
            }
        
            while(SDL_PollEvent(&event))
            {
                if (event.type == SDL_QUIT)
                {
                    continuer = 0;
                }
                
                else if (event.type == SDL_KEYDOWN || event.type == SDL_KEYUP)
                {
                    lire_clavier(&event, &touche_haut, &touche_bas, &touche_droite, &touche_gauche, &touche_interaction, &touche_suicide);
                }
            }
            deplacer_hero(carte, enemies, &perso, touche_haut, touche_bas, touche_droite, touche_gauche);
            interaction(carte, enemies, perso.position, touche_interaction, &creer_nouv_laby, &niveau, &score);
            deplacer_enemie(carte, enemies, perso.position);
            attaque_enemie(carte, enemies, &perso);
        }
    }
    detruirListe(enemies);
    SDL_DestroyWindow(fenetre);
    SDL_Quit();
    return 0;
}


