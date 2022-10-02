
#ifndef Header_h
#define Header_h


#define NIVEAU_DEPART 1

#define NOMBRE_PIXEL_HAUTEUR_MAC 900*5/4
#define NOMBRE_PIXEL_LARGEUR_MAC 1440*5/4ds
#define NOMBRE_PIXELS_CASE_HAUTEUR 32
#define NOMBRE_PIXELS_CASE_LARGEUR 32
#define HAUTEUR_AFFICHAGE (NOMBRE_PIXEL_HAUTEUR_MAC / NOMBRE_PIXELS_CASE_HAUTEUR)
#define LARGEUR_AFFICHAGE (NOMBRE_PIXEL_LARGEUR_MAC / NOMBRE_PIXELS_CASE_LARGEUR)
#define MOITIE_HAUTEUR_AFFICHAGE (HAUTEUR_AFFICHAGE-1)/2
#define MOITIE_LARGEUR_AFFICHAGE (LARGEUR_AFFICHAGE-1)/2

#define TAILLE_CARTE 651
#define TAILLE_D_UN_CHUNK 51 // (taille de la carte - 1) % (Taille d un chunk - 1) = 0 et ( (taille de la carte - 1) / (Taille d un chunk - 1) ) soit impaire
#define MOITIE_TAILLE_CHUNK (TAILLE_D_UN_CHUNK-1)/2
#define TAILLE_LABYRINTHE (TAILLE_CARTE-1) / (TAILLE_D_UN_CHUNK-1) - 2
#define TAILLE_TUNNEL 7
#define MOITIE_TAILLE_TUNNEL (TAILLE_TUNNEL-1)/2

#define MODE_DE_DEPLACEMENT "normal" // "normal" ou "fantome"
#define VITESSE_HERO_FANTOME 1

#define PROBA_ESPACE_2 5
#define PROBA_ESPACE_3 7
#define PROBA_ESPACE_4 7
#define PROBA_MUR_2 3

#define TOUCHE_HAUT SDLK_z
#define TOUCHE_BAS SDLK_s
#define TOUCHE_DROITE SDLK_d
#define TOUCHE_GAUCHE SDLK_q
#define TOUCHE_INTERACTION SDLK_RETURN
#define TOUCHE_SUICIDE SDLK_SPACE

#define NOMBRE_SALLE_POSSIBLE 9
#define PROBA_SALLE_ALEA 10
#define PROBA_SALLE_COFFRE 60
#define PROBA_SALLE_PROLONGATION_COULOIR 35
#define PROBA_SALLE_BEGNET 65
#define PROBA_SALLE_HORDE 250
#define PROBA_SALLE_OMBRE 700
#define PROBA_SALLE_LUTIN 600
#define PROBA_SALLE_GOBLIN 200
#define PROBA_SALLE_DRAGON 1000

#define NIVEAU_MIN_SALLE_HORDE 2
#define NIVEAU_MIN_SALLE_OMBRE 5
#define NIVEAU_MIN_SALLE_LUTIN 2
#define NIVEAU_MIN_SALLE_GOBLIN 3
#define NIVEAU_MIN_SALLE_DRAGON 6

#define NOMBRE_MODIF_POSSIBLE 6
#define PROBA_MODIF_VIDE 20
#define PROBA_MODIF_CIBLE 25
#define PROBA_MODIF_PLUS 25
#define PROBA_MODIF_CARRE_CASSE 66
#define PROBA_MODIF_CAISSE_ALEA 66
#define PROBA_MODIF_POT_DE_FLEUR 40

#define TAILLE_PETIT_PLATEAU 21
#define TAILLE_SALLE_OMBRE 31
#define TAILLE_SALLE_GOBLIN 29
#define TAILLE_SALLE_DRAGON 25

#define NOMBRE_DE_LARGEUR_ET_HAUTEUR 3
#define LARGEUR_HAUTEUR_1 35
#define LARGEUR_HAUTEUR_2 39
#define LARGEUR_HAUTEUR_3 43

#define DISTANCE_DEPLACEMENT_ALEA 25

#define SALLE_CAISSE_ALEA_PROBA_CAISSE 17
#define SALLE_CAISSE_ALEA_PROBA_SERVEUR 70

#define MINI_MAP_NOMBRE_PIXEL_CASE 15
#define MINI_MAP_NOMBRE_PIXEL_SALLE 7
#define MINI_MAP_TAILLE MINI_MAP_NOMBRE_PIXEL_CASE * TAILLE_LABYRINTHE
#define MINI_MAP_X NOMBRE_PIXEL_LARGEUR_MAC - MINI_MAP_TAILLE - 30
#define MINI_MAP_Y 30
#define MINI_MAP_LARGEUR_TUNNEL 1

#define CHARGE_MULTIPLICATEUR_VISION 6

#define MENU_NOMBRE_PIXEL_HAUTEUR_CURSEUR_1 200
#define MENU_NOMBRE_PIXEL_LARGEUR_CURSEUR_1 500
#define MENU_NOMBRE_PIXEL_HAUTEUR_CURSEUR_2 210
#define MENU_NOMBRE_PIXEL_LARGEUR_CURSEUR_2 510

#define PROBA_COFFRE_SALLE_DRAGON 18
#define PROBA_COFFRE_VIDE_SALLE_DRAGON 20
#define PROBA_COFFRE_LEGENDAIRE_SALLE_DRAGON 150
#define PROBA_COFFRE_LEGENDAIRE_VIDE_SALLE_DRAGON 120

#define TEMPS_MENU_AVANT_INTERACTION 30
#define VITESSE_CLIGNOTEMENT_CURSEUR_MENU 12

#define SCORE_COFFRE 1
#define SCORE_COFFRE_LEGENDAIRE 3

#define NOMBRE_BIOME 1

#define DUREE_AVANT_MORT 255
#define VITESSE_MORT 3
#define VITESSE_REGENERATION 12

#define PROBA_POT_DE_FLEUR 3
#define DISTANCE_POT_DE_FLEUR 3
#define SALLE_POT_DE_FLEUR_PROBA_CAISSE 50
#define VARIATION_TAILLE_POT_DE_FLEUR 6

#define PROBA_RELIER_SALLE 5


typedef struct
{
    int x;
    int y;
    char direction;
}Coor;

typedef struct
{
    int distance;
    int haut;
    int droite;
    int bas;
    int gauche;
    int type_de_salle;
}case_labyrinthe;

typedef struct
{
    char apparence;
    int discretion;
    int charge;
    int intelligence;
    int vitesse;
    int vision;
    Coor position;
}Enemie;

typedef struct
{
    int gel;
    Coor position;
}Hero;

typedef struct Element Element;
struct Element
{
    Enemie enemie;
    Element *suivant;
};

typedef struct Liste_enemie Liste_enemie;
struct Liste_enemie
{
    Element *premier;
};

typedef struct
{
    char decor;
    char objet;
    char enemie;
    char direction_enemie;
    int perso;
}Case_carte;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL.h>

#include "carte.h"
#include "labyrinthe.h"
#include "affichage.h"
#include "action.h"
#include "vivant.h"
#include "liste_chainee.h"
#include "initialisation.h"

#include "garde.h"
#include "garde_elite.h"
#include "etrange_caisse.h"
#include "slim.h"
#include "minautor.h"
#include "gros_slim.h"
#include "fantome.h"
#include "mage_de_glace.h"
#include "lutin.h"
#include "liche.h"
#include "gnome_lepreux.h"
#include "goblin.h"
#include "dragon.h"


#endif /* Header_h */
