
#include "Header.h"

void deplacer_hero(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies ,Hero* perso, int touche_haut, int touche_bas, int touche_droite, int touche_gauche)
{
    if (MODE_DE_DEPLACEMENT == "normal" )
    {
        if (perso->gel > 0)
        {
            (perso->gel)--;
        }
        else
        {
            if (touche_droite)
            {
                if ( !(obstacle(carte, perso->position.x + 1, perso->position.y)) )
                {
                    carte[perso->position.x][perso->position.y].perso = 0;
                    perso->position.x += 1;
                    carte[perso->position.x][perso->position.y].perso = 1;
                }
                perso->position.direction = '>';
            }
            
            if (touche_gauche)
            {
                if ( !(obstacle(carte, perso->position.x - 1, perso->position.y)) )
                {
                    carte[perso->position.x][perso->position.y].perso = 0;
                    perso->position.x -= 1;
                    carte[perso->position.x][perso->position.y].perso = 1;
                }
                perso->position.direction = '<';
            }
    
            if (touche_haut)
            {
                if ( !(obstacle(carte, perso->position.x, perso->position.y - 1)) )
                {
                    carte[perso->position.x][perso->position.y].perso = 0;
                    perso->position.y -= 1;
                    carte[perso->position.x][perso->position.y].perso = 1;
                }
                perso->position.direction = '^';
            }
            
            if (touche_bas)
            {
                if ( !(obstacle(carte, perso->position.x, perso->position.y + 1)) )
                {
                    carte[perso->position.x][perso->position.y].perso = 0;
                    perso->position.y += 1;
                    carte[perso->position.x][perso->position.y].perso = 1;
                }
                perso->position.direction = 'v';
            }
        }
    }
    
    if (MODE_DE_DEPLACEMENT == "fantome")
    {
        if (touche_haut)
        {
            carte[perso->position.x][perso->position.y].perso = 0;
            perso->position.y -= VITESSE_HERO_FANTOME;
            perso->position.direction = '^';
            carte[perso->position.x][perso->position.y].perso = 1;
        }
        
        if (touche_bas)
        {
            carte[perso->position.x][perso->position.y].perso = 0;
            perso->position.y += VITESSE_HERO_FANTOME;
            perso->position.direction = 'v';
            carte[perso->position.x][perso->position.y].perso = 1;
        }
        
        if (touche_droite)
        {
            carte[perso->position.x][perso->position.y].perso = 0;
            perso->position.x += VITESSE_HERO_FANTOME;
            perso->position.direction = '>';
            carte[perso->position.x][perso->position.y].perso = 1;
        }
        
        if (touche_gauche)
        {
            carte[perso->position.x][perso->position.y].perso = 0;
            perso->position.x -= VITESSE_HERO_FANTOME;
            perso->position.direction = '<';
            carte[perso->position.x][perso->position.y].perso = 1;
        }
    }
}
