
#ifndef vivant_h
#define vivant_h


void deplacer_enemie(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE],
                     Liste_enemie* enemies,
                     Coor perso);

void deplacement_alea(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Enemie* enemie, Coor perso);

void deplacement_strategique_1(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Enemie* enemie, Coor perso);


void deplacement_strategique_2(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Enemie* enemie, Coor perso);

void deplacement_strategique_3(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Enemie* enemie, Coor perso);

void deplacement_strategique_4(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Enemie* enemie, Coor perso);

void attaque_enemie(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE],
                    Liste_enemie* enemies,
                    Hero* perso);


#endif /* vivant_h */
