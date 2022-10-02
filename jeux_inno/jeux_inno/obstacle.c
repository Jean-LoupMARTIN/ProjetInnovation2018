
#include "Header.h"

int obstacle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], int x, int y)
{
    if ( (carte[x][y].decor == ' ' ||
          carte[x][y].decor == '-' ||
          carte[x][y].decor == '_' ||
          carte[x][y].decor == ')' ||
          carte[x][y].decor == 'e' ||
          carte[x][y].decor == 'T' ||
          carte[x][y].decor == 't' ||
          carte[x][y].decor == '=') &&
        carte[x][y].objet == '.' &&
        carte[x][y].enemie == '.' &&
        carte[x][y].perso == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
