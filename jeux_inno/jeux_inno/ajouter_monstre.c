
#include "Header.h"

int ajouter_monstre(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE],
                     Liste_enemie* enemies,
                     Coor centre,
                     int hauteur, int largeur,
                     int proba_enemie,
                     char apparence,
                     int niveau,
                     Coor perso)
{
    int i, j;
    int nombre_monstre_ajoute = 0;
    int nombre_alea;
    int moitie_largeur = (largeur-1) / 2;
    int moitie_hauteur = (hauteur-1) / 2;
    
    Enemie enemie;
    enemie.apparence = apparence;

    for (i = 0; i < hauteur; i++)
    {
        for (j = 0; j < largeur; j++)
        {
            if ( !(obstacle(carte, centre.x - moitie_largeur + j, centre.y - moitie_hauteur + i)) )
            {
                nombre_alea = rand() % proba_enemie;
                
                if (nombre_alea == 0)
                {
                    enemie.position.x = centre.x - moitie_largeur + j;
                    enemie.position.y = centre.y - moitie_hauteur + i;
                    enemie.position.direction = 'v';
                    enemie.charge = 0;
                    enemie.discretion = 0;
                    carte[enemie.position.x][enemie.position.y].enemie = apparence;
                    carte[enemie.position.x][enemie.position.y].direction_enemie = 'v';

                    
                    switch (apparence)
                    {
                        case 'g':
                            enemie.intelligence = INTELL_GARDE_DE_BASE;
                            enemie.vitesse = GARDE_VITESSE_MAX + rand() % VARIATION_GARDE_VITESSE;
                            enemie.vision = rand() % VARIATION_GARDE_VISION;

                            switch (niveau)
                            {
                                case 1:
                                    nombre_alea = rand() % GARDE_PROBA_AUGMENTER_INTELL_1;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vision += GARDE_VISION_MIN_1;
                                    break;
                                
                                case 2:
                                    nombre_alea = rand() % GARDE_PROBA_AUGMENTER_INTELL_2;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vision += GARDE_VISION_MIN_2;
                                    break;
                                    
                                case 3:
                                    nombre_alea = rand() % GARDE_PROBA_AUGMENTER_INTELL_3;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vision += GARDE_VISION_MIN_3;
                                    break;
                                    
                                case 4:
                                    nombre_alea = rand() % GARDE_PROBA_AUGMENTER_INTELL_4;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vision += GARDE_VISION_MIN_4;
                                    break;
                                
                                case 5:
                                    nombre_alea = rand() % GARDE_PROBA_AUGMENTER_INTELL_5;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vision += GARDE_VISION_MIN_5;
                                    break;
                                    
                                default:
                                    nombre_alea = rand() % GARDE_PROBA_AUGMENTER_INTELL_6;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vision += GARDE_VISION_MIN_6;
                                    break;
                            }
                            break;
                          
                            
                        case 'G':
                            enemie.intelligence = INTELL_GARDE_ELITE_DE_BASE;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.vitesse = GARDE_ELITE_VITESSE_MAX;
                            enemie.vision = rand() % VARIATION_GARDE_ELITE_VISION;

                            switch (niveau)
                            {
                                case 1:
                                    nombre_alea = rand() % GARDE_ELITE_PROBA_AUGMENTER_INTELL_1;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vitesse += rand() % VARIATION_GARDE_ELITE_VITESSE_1;
                                    enemie.vision += GARDE_ELITE_VISION_MIN_1;
                                    break;
                                    
                                    
                                case 2:
                                    nombre_alea = rand() % GARDE_ELITE_PROBA_AUGMENTER_INTELL_2;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vitesse += rand() % VARIATION_GARDE_ELITE_VITESSE_2;
                                    enemie.vision += GARDE_ELITE_VISION_MIN_2;
                                    break;
                                    
                                case 3:
                                    nombre_alea = rand() % GARDE_ELITE_PROBA_AUGMENTER_INTELL_3;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vitesse += rand() % VARIATION_GARDE_ELITE_VITESSE_3;
                                    enemie.vision += GARDE_ELITE_VISION_MIN_3;
                                    break;
                                    
                                case 4:
                                    nombre_alea = rand() % GARDE_ELITE_PROBA_AUGMENTER_INTELL_4;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vitesse += rand() % VARIATION_GARDE_ELITE_VITESSE_4;
                                    enemie.vision += GARDE_ELITE_VISION_MIN_4;
                                    break;
                                    
                                case 5:
                                    nombre_alea = rand() % GARDE_ELITE_PROBA_AUGMENTER_INTELL_5;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vitesse += rand() % VARIATION_GARDE_ELITE_VITESSE_5;
                                    enemie.vision += GARDE_ELITE_VISION_MIN_5;
                                    break;
                                
                                default:
                                    nombre_alea = rand() % GARDE_ELITE_PROBA_AUGMENTER_INTELL_6;
                                    if (nombre_alea == 0)
                                    {
                                        enemie.intelligence++;
                                    }
                                    enemie.vitesse += rand() % VARIATION_GARDE_ELITE_VITESSE_6;
                                    enemie.vision += GARDE_ELITE_VISION_MIN_6;
                                    break;
                            }
                            break;
                            
                            
                        case 'b':
                            enemie.intelligence = INTELL_ETRANGE_CAISSE;
                            enemie.vitesse = ETRANGE_CAISSE_VITESSE;
                            enemie.vision = ETRANGE_CAISSE_VISION;
                            break;
                            
                        case 'i':
                            enemie.intelligence = INTELL_LUTIN;
                            enemie.vitesse = LUTIN_VITESSE;
                            enemie.vision = LUTIN_VISION;
                            break;
                            
                        case 's':
                            enemie.intelligence = INTELL_SLIM_DE_BASE;
                            enemie.discretion = SLIM_DISCRETION + rand() % VARIATION_SLIM_DISCRETION;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.vitesse = SLIM_VITESSE_MAX;
                            enemie.vision = SLIM_VISION_MIN;
                            break;
                        
                        case 'M':
                            enemie.intelligence = INTELL_MINAUTOR_DE_BASE;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.vitesse = MINAUTOR_VITESSE_MAX;
                            enemie.vision = MINAUTOR_VISION_MIN;
                            break;
                            
                        case 'Z':
                            enemie.intelligence = INTELL_GROS_SLIM_DE_BASE;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.discretion = GROS_SLIM_DISCRETION + rand() % VARIATION_GROS_SLIM_DISCRETION;
                            enemie.vitesse = GROS_SLIM_VITESSE_MAX + rand() % VARIATION_GROS_SLIM_VITESSE;
                            enemie.vision = GROS_SLIM_VISION_MIN;
                            break;
                            
                        case 'n':
                            enemie.intelligence = INTELL_FANTOME_DE_BASE;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.discretion = FANTOME_DISCRETION + rand() % VARIATION_FANTOME_DISCRETION;
                            enemie.vitesse = FANTOME_VITESSE_MAX;
                            enemie.vision = FANTOME_VISION_MIN;
                            
                            nombre_alea = rand() % FANTOME_PROBA_AUGMENTER_INTELL;
                            if (nombre_alea == 0)
                            {
                                enemie.intelligence++;
                            }
                            break;

                        case 'w':
                            enemie.intelligence = INTELL_GNOME_LEPREUX;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.vitesse = GNOME_LEPREUX_VITESSE;
                            enemie.vision = GNOME_LEPREUX_VISION + rand() % VARIATION_GNOME_LEPREUX_VISION;
                            break;
                            
                        case 'u':
                            enemie.intelligence = INTELL_GOBLIN_DE_BASE;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.vitesse = GOBLIN_VITESSE;
                            enemie.vision = GOBLIN_VISION;
                
                            break;
                            
                        case 'm':
                            enemie.intelligence = INTELL_MAGE_DE_GLACE_DE_BASE;
                            enemie.position.x = centre.x - moitie_largeur + j;
                            enemie.position.y = centre.y - moitie_hauteur + i;
                            enemie.vitesse = MAGE_DE_GLACE_VITESSE_MAX;
                            enemie.vision = rand() % VARIATION_MAGE_DE_GLACE_VISION;

                            switch (niveau)
                            {
                                case 1:
                                    enemie.vision += MAGE_DE_GLACE_VISION_MIN_1;
                                    break;
                                    
                                case 2:
                                    enemie.vision += MAGE_DE_GLACE_VISION_MIN_2;
                                    break;
                                    
                                case 3:
                                    enemie.vision += MAGE_DE_GLACE_VISION_MIN_3;
                                    break;
                                    
                                case 4:
                                    enemie.vision += MAGE_DE_GLACE_VISION_MIN_4;
                                    break;
                                    
                                case 5:
                                    enemie.vision += MAGE_DE_GLACE_VISION_MIN_5;
                                    break;

                                default:
                                    enemie.vision += MAGE_DE_GLACE_VISION_MIN_6;
                                    break;
                            }
                            break;
                            
                        case 'N':
                            enemie.intelligence = INTELL_LICHE;
                            enemie.vitesse = LICHE_VITESSE;
                            enemie.vision = LICHE_VISION;
                            break;
                            
                        case 'D':
                            enemie.intelligence = INTELL_DRAGON;
                            enemie.vitesse = DRAGON_VITESSE;
                            enemie.vision = DRAGON_VISION;
                            break;
                            
                        case 'd':
                            enemie.intelligence = INTELL_FLAMME;
                            enemie.vitesse = FLAMME_VITESSE;
                            enemie.vision = FLAMME_VISION;
                            break;
                            
                        default:
                            break;
                    }
                    nombre_monstre_ajoute++;
                    insertion(enemies, 0, enemie);
                }
            }
        }
    }
    return nombre_monstre_ajoute;
}
