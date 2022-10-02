
#include "Header.h"

void interaction(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, Coor perso, int touche_interaction, int* creer_nouv_laby, int* niveau, int* score)
{
    if (touche_interaction)
    {
        Coor cible;
        Coor deriere_la_cible;

        if (perso.direction == '^')
        {
            cible.x = perso.x;
            cible.y = perso.y-1;
            
            deriere_la_cible.x = perso.x;
            deriere_la_cible.y = perso.y-2;
        }
        if (perso.direction == '>')
        {
            cible.x = perso.x+1;
            cible.y = perso.y;
            
            deriere_la_cible.x = perso.x+2;
            deriere_la_cible.y = perso.y;
        }
        if (perso.direction == 'v')
        {
            cible.x = perso.x;
            cible.y = perso.y+1;
            
            deriere_la_cible.x = perso.x;
            deriere_la_cible.y = perso.y+2;
        }
        if (perso.direction == '<')
        {
            cible.x = perso.x-1;
            cible.y = perso.y;
            
            deriere_la_cible.x = perso.x-2;
            deriere_la_cible.y = perso.y;
        }
        
        
        switch (carte[cible.x][cible.y].objet)
        {
            case 'E':
                *score += 2 + *niveau;
                (*niveau)++;
                *creer_nouv_laby = 1;
                break;
                
            case 'C':
                (*score) += SCORE_COFFRE;
                carte[cible.x][cible.y].objet = 'c';
                break;
              
            case 'B':
                if ( !(obstacle(carte, deriere_la_cible.x, deriere_la_cible.y)) )
                {
                    carte[cible.x][cible.y].objet = '.';
                    carte[deriere_la_cible.x][deriere_la_cible.y].objet = 'B';
                }
                break;
                
            case 'L':
                *score += SCORE_COFFRE_LEGENDAIRE;
                carte[cible.x][cible.y].objet = 'l';
                break;
                
            default:
                break;
        }
        
        Element *actuel = enemies->premier;
        int position = 0;
        
        while (actuel != NULL)
        {
            if ( actuel->enemie.apparence == 'i' && actuel->enemie.position.x == cible.x && actuel->enemie.position.y == cible.y )
            {
                *score += LUTIN_SCORE;
                suppression(enemies, position);
                carte[cible.x][cible.y].enemie = '.';
                position--;
            }
            
            position++;
            actuel = actuel->suivant;
        }
    }
}
