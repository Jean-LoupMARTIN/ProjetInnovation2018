
#ifndef affichage_h
#define affichage_h


void afficher_menu(SDL_Renderer *renderer, int* courant_curseur_1);

void afficher_mini_map(case_labyrinthe mini_map[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], SDL_Renderer *renderer, Hero perso);

int obstacle_brouillard(char carte[TAILLE_CARTE][TAILLE_CARTE] , int x, int y);

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
                             );

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
                            );

#endif /* affichage_h */
