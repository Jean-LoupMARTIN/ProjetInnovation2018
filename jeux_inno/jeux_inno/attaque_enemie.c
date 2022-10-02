
#include "Header.h"

void attaque_enemie(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE],
                    Liste_enemie* enemies,
                    Hero* perso)
{
    Element *actuel = enemies->premier;
    Element *actuel_2;
    int nombre_alea;
    int difference_coor_enemie_hero_x;
    int difference_coor_enemie_hero_y;
    int difference_coor_entre_goblin_x;
    int difference_coor_entre_goblin_y;
    int position=0;
    
    while (actuel != NULL)
    {
        switch (actuel->enemie.apparence)
        {
            case 'Z':
                difference_coor_enemie_hero_x = actuel->enemie.position.x - perso->position.x;
                difference_coor_enemie_hero_y = actuel->enemie.position.y - perso->position.y;
                
                if ( !(difference_coor_enemie_hero_x > DISTANCE_MIN_ATTAQUE_GROS_SLIM || (-1 * difference_coor_enemie_hero_x) > DISTANCE_MIN_ATTAQUE_GROS_SLIM || difference_coor_enemie_hero_y > DISTANCE_MIN_ATTAQUE_GROS_SLIM || (-1 * difference_coor_enemie_hero_y) > DISTANCE_MIN_ATTAQUE_GROS_SLIM) )
                {
                    nombre_alea = rand() % GROS_SLIM_PROBA_ATTAQUE;
                    
                    if (nombre_alea == 0)
                    {
                        nombre_alea = rand() % 2;
                        if (nombre_alea == 0)
                        {
                            position += ajouter_monstre(carte, enemies, actuel->enemie.position, 3, 1, 1, 's', 1, perso->position);
                        }
                        else
                        {
                            position += ajouter_monstre(carte, enemies, actuel->enemie.position, 1, 3, 1, 's', 1, perso->position);
                        }
                    }
                }
                break;
                
            case 'm':
                difference_coor_enemie_hero_x = actuel->enemie.position.x - perso->position.x;
                difference_coor_enemie_hero_y = actuel->enemie.position.y - perso->position.y;
                
                if ( !(difference_coor_enemie_hero_x > DISTANCE_MIN_ATTAQUE_MAGE_DE_GLACE || (-1 * difference_coor_enemie_hero_x) > DISTANCE_MIN_ATTAQUE_MAGE_DE_GLACE || difference_coor_enemie_hero_y > DISTANCE_MIN_ATTAQUE_MAGE_DE_GLACE || (-1 * difference_coor_enemie_hero_y) > DISTANCE_MIN_ATTAQUE_MAGE_DE_GLACE) )
                {
                    nombre_alea = rand() % MAGE_DE_GLACE_PROBA_ATTAQUE;
                    
                    if (nombre_alea == 0)
                    {
                        perso->gel = MAGE_DE_GLACE_DUREE_GEL;
                    }
                }
                break;
                
            case 'u':
                difference_coor_enemie_hero_x = actuel->enemie.position.x - perso->position.x;
                difference_coor_enemie_hero_y = actuel->enemie.position.y - perso->position.y;
                
                if ( !(difference_coor_enemie_hero_x > actuel->enemie.vision ||
                       (-1 * difference_coor_enemie_hero_x) > actuel->enemie.vision ||
                       difference_coor_enemie_hero_y > actuel->enemie.vision ||
                       (-1 * difference_coor_enemie_hero_y) > actuel->enemie.vision) )
                {
                    actuel_2 = enemies->premier;

                    while (actuel_2 != NULL)
                    {
                        if (actuel_2->enemie.apparence == 'u')
                        {
                            difference_coor_entre_goblin_x = actuel->enemie.position.x - actuel_2->enemie.position.x;
                            difference_coor_entre_goblin_y = actuel->enemie.position.y - actuel_2->enemie.position.y;
                            
                            if ( !(difference_coor_entre_goblin_x > GOBLIN_PORTEE_APPEL ||
                                   (-1 * difference_coor_entre_goblin_x) > GOBLIN_PORTEE_APPEL ||
                                   difference_coor_entre_goblin_y > GOBLIN_PORTEE_APPEL ||
                                   (-1 * difference_coor_entre_goblin_y) > GOBLIN_PORTEE_APPEL) )
                            {
                                actuel_2->enemie.charge = 1;
                            }
                        }
                        actuel_2 = actuel_2->suivant;
                    }
                }
                break;
                
            case 'd':
                difference_coor_enemie_hero_x = actuel->enemie.position.x - perso->position.x;
                difference_coor_enemie_hero_y = actuel->enemie.position.y - perso->position.y;
                
                if ( difference_coor_enemie_hero_x > actuel->enemie.vision ||
                       (-1 * difference_coor_enemie_hero_x) > actuel->enemie.vision ||
                       difference_coor_enemie_hero_y > actuel->enemie.vision ||
                       (-1 * difference_coor_enemie_hero_y) > actuel->enemie.vision )
                {
                    suppression(enemies, position);
                    carte[actuel->enemie.position.x][actuel->enemie.position.y].enemie = '.';
                    carte[actuel->enemie.position.x][actuel->enemie.position.y].direction_enemie = '.';
                    position--;
                }
                break;
                
            case 'D':
                difference_coor_enemie_hero_x = actuel->enemie.position.x - perso->position.x;
                difference_coor_enemie_hero_y = actuel->enemie.position.y - perso->position.y;
                Coor cible = actuel->enemie.position;
                if ( !(difference_coor_enemie_hero_x > DISTANCE_MIN_ATTAQUE_DRAGON || (-1 * difference_coor_enemie_hero_x) > DISTANCE_MIN_ATTAQUE_DRAGON || difference_coor_enemie_hero_y > DISTANCE_MIN_ATTAQUE_DRAGON || (-1 * difference_coor_enemie_hero_y) > DISTANCE_MIN_ATTAQUE_DRAGON) )
                {
                    if (difference_coor_enemie_hero_x == 0)
                    {
                        if (difference_coor_enemie_hero_y < 0)
                        {
                            cible.y++;
                        }
                        if (difference_coor_enemie_hero_y > 0)
                        {
                            cible.y--;
                        }
                    }
                    if (difference_coor_enemie_hero_y == 0)
                    {
                        if (difference_coor_enemie_hero_x < 0)
                        {
                            cible.x++;
                        }
                        if (difference_coor_enemie_hero_x > 0)
                        {
                            cible.x--;
                        }
                    }
                    
                    if (difference_coor_enemie_hero_x < 0 && difference_coor_enemie_hero_y < 0)
                    {
                        
                        if ( (-1 * difference_coor_enemie_hero_x) > (-1 * difference_coor_enemie_hero_y) )
                        {
                            cible.y++;
                        }
                        else if ((-1 * difference_coor_enemie_hero_x) < (-1 * difference_coor_enemie_hero_y))
                        {
                            cible.x++;
                        }
                        else
                        {
                            nombre_alea = rand() % 2;
                            
                            switch (nombre_alea)
                            {
                                case 0:
                                    cible.x++;
                                    break;
                                    
                                case 1:
                                    cible.y++;
                                    break;
                                    
                                default:
                                    break;
                            }
                        }
                    }
                    if (difference_coor_enemie_hero_x > 0 && difference_coor_enemie_hero_y < 0)
                    {
                        if (difference_coor_enemie_hero_x > (-1 * difference_coor_enemie_hero_y))
                        {
                            cible.y++;
                        }
                        else if (difference_coor_enemie_hero_x < (-1 * difference_coor_enemie_hero_y))
                        {
                            cible.x--;
                        }
                        else
                        {
                            nombre_alea = rand() % 2;
                            
                            switch (nombre_alea)
                            {
                                case 0:
                                    cible.x--;
                                    break;
                                    
                                case 1:
                                    cible.y++;
                                    break;
                                    
                                default:
                                    break;
                            }
                        }
                    }
                    if (difference_coor_enemie_hero_x > 0 && difference_coor_enemie_hero_y > 0)
                    {
                        if (difference_coor_enemie_hero_x > difference_coor_enemie_hero_y)
                        {
                            cible.y--;
                        }
                        else if (difference_coor_enemie_hero_x < difference_coor_enemie_hero_y)
                        {
                            cible.x--;
                        }
                        else
                        {
                            nombre_alea = rand() % 2;
                            
                            switch (nombre_alea)
                            {
                                case 0:
                                    cible.x--;
                                    break;
                                    
                                case 1:
                                    cible.y--;
                                    break;
                                    
                                default:
                                    break;
                            }
                        }
                    }
                    if (difference_coor_enemie_hero_x < 0 && difference_coor_enemie_hero_y > 0)
                    {
                        if ((-1 * difference_coor_enemie_hero_x) > difference_coor_enemie_hero_y)
                        {
                            cible.y--;
                        }
                        else if ((-1 * difference_coor_enemie_hero_x) < difference_coor_enemie_hero_y)
                        {
                            cible.x++;
                        }
                        else
                        {
                            nombre_alea = rand() % 2;
                            
                            switch (nombre_alea)
                            {
                                case 0:
                                    cible.x++;
                                    break;
                                    
                                case 1:
                                    cible.y--;
                                    break;
                                    
                                default:
                                    break;
                            }
                        }
                    }
                }
                position += ajouter_monstre(carte, enemies, cible, 1, 1, 1, 'd', 1, perso->position);
                break;
                
            default:
                break;
        }
        position++;
        actuel = actuel->suivant;
    }
}
