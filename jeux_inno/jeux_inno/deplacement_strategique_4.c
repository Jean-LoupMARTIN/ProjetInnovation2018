
#include "Header.h"

void deplacement_strategique_4(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Enemie* enemie, Coor perso)
{
    int nombre_alea;
    Coor cible;
    cible.x = enemie->position.x;
    cible.y = enemie->position.y;
    cible.direction = enemie->position.direction;
    int difference_coor_enemie_hero_x = enemie->position.x - perso.x;
    int difference_coor_enemie_hero_y = enemie->position.y - perso.y;
    
    if ( !(difference_coor_enemie_hero_x > enemie->vision || (-1 * difference_coor_enemie_hero_x) > enemie->vision || difference_coor_enemie_hero_y > enemie->vision || (-1 * difference_coor_enemie_hero_y) > enemie->vision) && enemie->charge == 0 )
    {
        enemie->charge = 1;
    }
    if ( (difference_coor_enemie_hero_x > enemie->vision * CHARGE_MULTIPLICATEUR_VISION || (-1 * difference_coor_enemie_hero_x) > enemie->vision * CHARGE_MULTIPLICATEUR_VISION || difference_coor_enemie_hero_y > enemie->vision * CHARGE_MULTIPLICATEUR_VISION || (-1 * difference_coor_enemie_hero_y) > enemie->vision * CHARGE_MULTIPLICATEUR_VISION) && enemie->charge == 1 )
    {
        enemie->charge = 0;
    }
    
    if (enemie->charge == 0)
    {
        deplacement_alea(carte, enemie, perso);
    }
    else
    {
        if (difference_coor_enemie_hero_x == 0)
        {
            if (difference_coor_enemie_hero_y < 0)
            {
                cible.y++;
                cible.direction = 'v';
            }
            if (difference_coor_enemie_hero_y > 0)
            {
                cible.y--;
                cible.direction = '^';
            }
        }
        if (difference_coor_enemie_hero_y == 0)
        {
            if (difference_coor_enemie_hero_x < 0)
            {
                cible.x++;
                cible.direction = '>';
            }
            if (difference_coor_enemie_hero_x > 0)
            {
                cible.x--;
                cible.direction = '<';
            }
        }
        
        if (difference_coor_enemie_hero_x < 0 && difference_coor_enemie_hero_y < 0)
        {
            cible.x++;
            cible.y++;
            cible.direction = 'v';
        }
        if (difference_coor_enemie_hero_x > 0 && difference_coor_enemie_hero_y < 0)
        {
            cible.x--;
            cible.y++;
            cible.direction = 'v';
        }
        if (difference_coor_enemie_hero_x > 0 && difference_coor_enemie_hero_y > 0)
        {
            cible.x--;
            cible.y--;
            cible.direction = '^';
        }
        if (difference_coor_enemie_hero_x < 0 && difference_coor_enemie_hero_y > 0)
        {
            cible.x++;
            cible.y--;
            cible.direction = '^';
        }
        
        if ( !(obstacle(carte, cible.x, cible.y)) )
        {
            carte[enemie->position.x][enemie->position.y].enemie = '.';
            carte[enemie->position.x][enemie->position.y].direction_enemie = '.';
            enemie->position.x = cible.x;
            enemie->position.y = cible.y;
            enemie->position.direction = cible.direction;
            carte[enemie->position.x][enemie->position.y].enemie = enemie->apparence;
            carte[enemie->position.x][enemie->position.y].direction_enemie = enemie->position.direction;
        }
        else
        {
            cible.x = enemie->position.x;
            cible.y = enemie->position.y;
            cible.direction = enemie->position.direction;

            if (difference_coor_enemie_hero_x < 0 && difference_coor_enemie_hero_y < 0)
            {
                nombre_alea = rand() % 2;
                
                switch (nombre_alea)
                {
                    case 0:
                        cible.x++;
                        cible.direction = '>';
                        break;
                        
                    case 1:
                        cible.y++;
                        cible.direction = 'v';
                        break;
                        
                    default:
                        break;
                }
            }
            if (difference_coor_enemie_hero_x > 0 && difference_coor_enemie_hero_y < 0)
            {
                nombre_alea = rand() % 2;
                
                switch (nombre_alea)
                {
                    case 0:
                        cible.x--;
                        cible.direction = '<';
                        break;
                        
                    case 1:
                        cible.y++;
                        cible.direction = 'v';
                        break;
                        
                    default:
                        break;
                }
            }
            if (difference_coor_enemie_hero_x > 0 && difference_coor_enemie_hero_y > 0)
            {
                nombre_alea = rand() % 2;
                
                switch (nombre_alea)
                {
                    case 0:
                        cible.x--;
                        cible.direction = '<';
                        break;
                        
                    case 1:
                        cible.y--;
                        cible.direction = '^';
                        break;
                        
                    default:
                        break;
                }
            }
            if (difference_coor_enemie_hero_x < 0 && difference_coor_enemie_hero_y > 0)
            {
                nombre_alea = rand() % 2;
                
                switch (nombre_alea)
                {
                    case 0:
                        cible.x++;
                        cible.direction = '>';
                        break;
                        
                    case 1:
                        cible.y--;
                        cible.direction = '^';
                        break;
                        
                    default:
                        break;
                }
            }
            
            if ( !(obstacle(carte, cible.x, cible.y)) )
            {
                carte[enemie->position.x][enemie->position.y].enemie = '.';
                carte[enemie->position.x][enemie->position.y].direction_enemie = '.';
                enemie->position.x = cible.x;
                enemie->position.y = cible.y;
                enemie->position.direction = cible.direction;
                carte[enemie->position.x][enemie->position.y].enemie = enemie->apparence;
                carte[enemie->position.x][enemie->position.y].direction_enemie = enemie->position.direction;
            }
        }
    }
}
