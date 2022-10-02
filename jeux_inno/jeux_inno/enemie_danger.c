
#include "Header.h"

int enemie_danger(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Hero perso)
{
    int danger = 0;
    
    if (carte[perso.position.x-1][perso.position.y].enemie == 'w' ||
        carte[perso.position.x+1][perso.position.y].enemie == 'w' ||
        carte[perso.position.x][perso.position.y-1].enemie == 'w' ||
        carte[perso.position.x][perso.position.y+1].enemie == 'w')
    {
        danger = 1;
    }
    
    if ( danger == 0 )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
