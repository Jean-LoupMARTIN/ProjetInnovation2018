
#include "Header.h"

void creation_plateau_alea(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor centre, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    int largeur_et_hauteur_possible[NOMBRE_DE_LARGEUR_ET_HAUTEUR];
    largeur_et_hauteur_possible[0] = LARGEUR_HAUTEUR_1;
    largeur_et_hauteur_possible[1] = LARGEUR_HAUTEUR_2;
    largeur_et_hauteur_possible[2] = LARGEUR_HAUTEUR_3;

    int largeur = largeur_et_hauteur_possible[rand() % NOMBRE_DE_LARGEUR_ET_HAUTEUR];;
    int hauteur = largeur_et_hauteur_possible[rand() % NOMBRE_DE_LARGEUR_ET_HAUTEUR];;

    Coor plateau_coin_haut_gauche;
    plateau_coin_haut_gauche.x = centre.x - (largeur - 1) / 2;
    plateau_coin_haut_gauche.y = centre.y - (hauteur - 1) / 2;

    int proba_garde;
    int proba_garde_elite;
    int proba_slim;
    int proba_gros_slim;
    int proba_mage_de_proba;
    int proba_gnome_lepreux;

    
    rectangle(carte, centre, hauteur, largeur, 'X', "contour", 1, "decor");
    rectangle(carte, centre, hauteur-2, largeur-2, ' ', "rempli", 1, "decor");
    porte_tunnel(carte, centre, hauteur, largeur, labyrithe, ' ', 1, 1, 'P');
    
    modifier_salle(carte, centre, hauteur, largeur, perso, enemies);
    
    switch (niveau)
    {
        case 1:
            proba_garde = PROBA_GARDE_1;
            proba_garde_elite = PROBA_GARDE_ELITE_1;
            proba_slim = PROBA_SLIM_1;
            proba_gros_slim = PROBA_GROS_SLIM_1;
            proba_mage_de_proba = PROBA_MAGE_DE_GLACE_1;
            proba_gnome_lepreux = PROBA_GNOME_LEPREUX_1;
            break;
        
        case 2:
            proba_garde = PROBA_GARDE_2;
            proba_garde_elite = PROBA_GARDE_ELITE_2;
            proba_slim = PROBA_SLIM_2;
            proba_gros_slim = PROBA_GROS_SLIM_2;
            proba_mage_de_proba = PROBA_MAGE_DE_GLACE_2;
            proba_gnome_lepreux = PROBA_GNOME_LEPREUX_2;
            break;
            
        case 3:
            proba_garde = PROBA_GARDE_3;
            proba_garde_elite = PROBA_GARDE_ELITE_3;
            proba_slim = PROBA_SLIM_3;
            proba_gros_slim = PROBA_GROS_SLIM_3;
            proba_mage_de_proba = PROBA_MAGE_DE_GLACE_3;
            proba_gnome_lepreux = PROBA_GNOME_LEPREUX_3;
            break;
       
        case 4:
            proba_garde = PROBA_GARDE_4;
            proba_garde_elite = PROBA_GARDE_ELITE_4;
            proba_slim = PROBA_SLIM_4;
            proba_gros_slim = PROBA_GROS_SLIM_4;
            proba_mage_de_proba = PROBA_MAGE_DE_GLACE_4;
            proba_gnome_lepreux = PROBA_GNOME_LEPREUX_4;
            break;
            
        case 5:
            proba_garde = PROBA_GARDE_5;
            proba_garde_elite = PROBA_GARDE_ELITE_5;
            proba_slim = PROBA_SLIM_5;
            proba_gros_slim = PROBA_GROS_SLIM_5;
            proba_mage_de_proba = PROBA_MAGE_DE_GLACE_5;
            proba_gnome_lepreux = PROBA_GNOME_LEPREUX_5;
            break;
            
        default:
            proba_garde = PROBA_GARDE_6;
            proba_garde_elite = PROBA_GARDE_ELITE_6;
            proba_slim = PROBA_SLIM_6;
            proba_gros_slim = PROBA_GROS_SLIM_6;
            proba_mage_de_proba = PROBA_MAGE_DE_GLACE_6;
            proba_gnome_lepreux = PROBA_GNOME_LEPREUX_6;
            break;
    }
    ajouter_monstre(carte, enemies, centre, hauteur-2, largeur-2, proba_garde, 'g', niveau, perso);
    ajouter_monstre(carte, enemies, centre, hauteur-2, largeur-2, proba_garde_elite, 'G', niveau, perso);
    ajouter_monstre(carte, enemies, centre, hauteur-2, largeur-2, proba_slim, 's', niveau, perso);
    ajouter_monstre(carte, enemies, centre, hauteur-2, largeur-2, proba_gros_slim, 'Z', niveau, perso);
    ajouter_monstre(carte, enemies, centre, hauteur-2, largeur-2, proba_mage_de_proba, 'm', niveau, perso);
    ajouter_monstre(carte, enemies, centre, hauteur-2, largeur-2, PROBA_LUTIN_SALLE_ALEA, 'i', niveau, perso);
    ajouter_monstre(carte, enemies, centre, hauteur-2, largeur-2, proba_gnome_lepreux, 'w', niveau, perso);
}














