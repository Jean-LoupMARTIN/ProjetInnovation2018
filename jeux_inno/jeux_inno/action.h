
#ifndef action_h
#define action_h


void lire_clavier(SDL_Event* event, int* touche_haut, int* touche_bas, int* touche_droite, int* touche_gauche, int* touche_interaction, int* touche_suicide);

void deplacer_hero(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies ,Hero* perso, int touche_haut, int touche_bas, int touche_droite, int touche_gauche);

int obstacle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], int x, int y);

void interaction(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor perso, int touche_interaction, int* creer_nouv_laby, int* niveau, int* score);

void perdu(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Hero perso, int* menu, int* jouer, int* touche_interaction, SDL_Renderer *renderer, int* perdu, int touche_suicide);

int enemie_danger(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Hero perso);


#endif /* action_h */
