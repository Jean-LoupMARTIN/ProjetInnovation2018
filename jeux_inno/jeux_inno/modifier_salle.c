
#include "Header.h"

void modifier_salle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, Coor perso, Liste_enemie* enemies)
{
    int modif_possible[NOMBRE_MODIF_POSSIBLE];
    modif_possible[0] = PROBA_MODIF_VIDE;
    modif_possible[1] = PROBA_MODIF_CIBLE;
    modif_possible[2] = PROBA_MODIF_PLUS;
    modif_possible[3] = PROBA_MODIF_CARRE_CASSE;
    modif_possible[4] = PROBA_MODIF_CAISSE_ALEA;
    modif_possible[5] = PROBA_MODIF_POT_DE_FLEUR;

    int nombre_alea = -1;
    int salle_choisi = 0;
    
    while (nombre_alea != 0)
    {
        nombre_alea = rand() % NOMBRE_MODIF_POSSIBLE;
        salle_choisi = nombre_alea;
        nombre_alea = rand() % modif_possible[nombre_alea];
    }

    
    switch (salle_choisi)
    {
        case 1:
                salle_cible(carte, centre, hauteur, largeur);
            break;
            
        case 2:
            salle_plus(carte, centre, hauteur, largeur, 'A');
            break;
            
        case 3:
            salle_carre_caisse(carte, centre, hauteur, largeur);
            break;
        
        case 4:
            salle_caisse_alea(carte, centre, hauteur, largeur, perso, enemies);
            break;
           
        case 5:
            salle_pot_de_fleur(carte, centre, hauteur, largeur, 'F');
            break;
            
        default:
            break;
    }
}
