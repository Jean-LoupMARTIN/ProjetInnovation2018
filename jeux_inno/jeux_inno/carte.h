
#ifndef carte_h
#define carte_h


void creation_de_la_carte(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void initialisation_carte(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE]);

void placer_tunnels(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], char element1, char element2, int proba_sol, int proba_mur);

void placer_salle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void creation_petit_plateau(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);

void creation_plateau_alea(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void creation_salle_couloir(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies ,Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void creation_salle_begnet(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE]);

void creation_salle_horde(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void creation_salle_ombre(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void creation_salle_goblin(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void creation_salle_dragon(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso);

void rectangle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element, char mode[20] ,int proba, char decor[20]);

void porte_tunnel(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], char element, int proba, int bool_pylone, char pylone);

void modifier_salle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, Coor perso, Liste_enemie* enemies);

void salle_cible(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur);

void salle_plus(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element);

void salle_carre_caisse(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur);

void salle_caisse_alea(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, Coor perso, Liste_enemie* enemies);

void salle_serveur(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element);

void porte_tunnel_salle_cible(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, int largeur_tunnel, char element, int proba, int bool_pylone, char pylone);

void salle_pot_de_fleur(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element);

int place_suffisante_pot_fleur(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur);

int ajouter_monstre(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE],
                     Liste_enemie* enemies,
                     Coor centre,
                     int hauteur, int largeur,
                     int proba_enemie,
                     char apparence,
                     int niveau,
                     Coor perso);

void modifier_carte(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE]);


#endif /* carte_h */
