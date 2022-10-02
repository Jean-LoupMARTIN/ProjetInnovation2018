
#ifndef labyrinthe_h
#define labyrinthe_h


void creation_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau);

void initialisation_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);

void affichage_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);

void creation_prototype_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], Coor courant);

int prototype_valide(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau);

void copier_labyrinthe(case_labyrinthe labyrinthe_receveur[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], case_labyrinthe labyrinthe_donneur[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);

void choisir_type_salle(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau);

void salle_arrivee_laby(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);

void modifier_mini_map(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], Hero perso, case_labyrinthe mini_map[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);

void relier_salle(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);


#endif /* labyrinthe_h */
