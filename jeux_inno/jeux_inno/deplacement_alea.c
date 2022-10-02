
#include "Header.h"

void deplacement_alea(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Enemie* enemie, Coor perso)
{
    int enemie_deplace = 0;
    int nombre_alea;
    Coor cible;
    int difference_coor_enemie_hero_x = enemie->position.x - perso.x;
    int difference_coor_enemie_hero_y = enemie->position.y - perso.y;
    
    if ( !(difference_coor_enemie_hero_x > DISTANCE_DEPLACEMENT_ALEA || (-1 * difference_coor_enemie_hero_x) > DISTANCE_DEPLACEMENT_ALEA || difference_coor_enemie_hero_y > DISTANCE_DEPLACEMENT_ALEA || (-1 * difference_coor_enemie_hero_y) > DISTANCE_DEPLACEMENT_ALEA) )
    {
        do {
            nombre_alea = rand() % 4;
            
            switch (nombre_alea)
            {
                case 0:
                    cible.x = enemie->position.x;
                    cible.y = enemie->position.y - 1;
                    
                    if ( !(obstacle(carte, cible.x, cible.y)) )
                    {
                        carte[enemie->position.x][enemie->position.y].enemie = '.';
                        carte[enemie->position.x][enemie->position.y].direction_enemie = '.';
                        enemie->position.x = cible.x;
                        enemie->position.y = cible.y;
                        enemie->position.direction = '^';
                        carte[enemie->position.x][enemie->position.y].enemie = enemie->apparence;
                        carte[enemie->position.x][enemie->position.y].direction_enemie = enemie->position.direction;
                        enemie_deplace = 1;
                    }
                    break;
                    
                case 1:
                    cible.x = enemie->position.x;
                    cible.y = enemie->position.y + 1;
                    
                    if ( !(obstacle(carte, cible.x, cible.y)) )
                    {
                        carte[enemie->position.x][enemie->position.y].enemie = '.';
                        carte[enemie->position.x][enemie->position.y].direction_enemie = '.';
                        enemie->position.x = cible.x;
                        enemie->position.y = cible.y;
                        enemie->position.direction = 'v';
                        carte[enemie->position.x][enemie->position.y].enemie = enemie->apparence;
                        carte[enemie->position.x][enemie->position.y].direction_enemie = enemie->position.direction;
                        enemie_deplace = 1;
                    }
                    break;
                    
                case 2:
                    cible.x = enemie->position.x + 1;
                    cible.y = enemie->position.y;
                    
                    if ( !(obstacle(carte, cible.x, cible.y)) )
                    {
                        carte[enemie->position.x][enemie->position.y].enemie = '.';
                        carte[enemie->position.x][enemie->position.y].direction_enemie = '.';
                        enemie->position.x = cible.x;
                        enemie->position.y = cible.y;
                        enemie->position.direction = '>';
                        carte[enemie->position.x][enemie->position.y].enemie = enemie->apparence;
                        carte[enemie->position.x][enemie->position.y].direction_enemie = enemie->position.direction;
                        enemie_deplace = 1;
                    }
                    break;
                    
                case 3:
                    cible.x = enemie->position.x - 1;
                    cible.y = enemie->position.y;
                    
                    if ( !(obstacle(carte, cible.x, cible.y)) )
                    {
                        carte[enemie->position.x][enemie->position.y].enemie = '.';
                        carte[enemie->position.x][enemie->position.y].direction_enemie = '.';
                        enemie->position.x = cible.x;
                        enemie->position.y = cible.y;
                        enemie->position.direction = '<';
                        carte[enemie->position.x][enemie->position.y].enemie = enemie->apparence;
                        carte[enemie->position.x][enemie->position.y].direction_enemie = enemie->position.direction;
                        enemie_deplace = 1;
                    }
                    break;
                    
                default:
                    printf("deplacement_alea : valeur de nombre_alea incorrecte");
                    break;
            }
        } while ( !(enemie_deplace) );
    }
}
