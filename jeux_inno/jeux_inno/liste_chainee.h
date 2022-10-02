#ifndef LISTE_CHAINEE
#define LISTE_CHAINEE


Liste_enemie *initialisation(void);
void insertion(Liste_enemie *liste, int place, Enemie enemie);
void suppression(Liste_enemie *liste, int place);
int tailleListe(Liste_enemie *liste);
void re_initialiser(Liste_enemie *liste);
void detruirListe(Liste_enemie *liste);


#endif
