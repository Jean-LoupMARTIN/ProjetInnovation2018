
#include "Header.h"

void creation_prototype_labyrinthe(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], Coor courant)
{
    int nombre_alea;

    if (courant.y - 1 >= 0 && labyrinthe[courant.y - 1][courant.x].distance == -1)
    {
        nombre_alea = rand() % (2 + labyrinthe[courant.y][courant.x].distance / 2);
        
        if (nombre_alea == 0)
        {
            labyrinthe[courant.y][courant.x].haut = 1;
            labyrinthe[courant.y - 1][courant.x].distance = labyrinthe[courant.y][courant.x].distance + 1;
            courant.y -= 1;
            creation_prototype_labyrinthe(labyrinthe, courant);
            courant.y += 1;
        }
    }
    
    if (courant.x + 1 < TAILLE_LABYRINTHE && labyrinthe[courant.y][courant.x + 1].distance == -1)
    {
        nombre_alea = rand() % (2 + labyrinthe[courant.y][courant.x].distance / 2);

        if (nombre_alea == 0)
        {
            labyrinthe[courant.y][courant.x].droite = 1;
            labyrinthe[courant.y][courant.x + 1].distance = labyrinthe[courant.y][courant.x].distance + 1;
            courant.x += 1;
            creation_prototype_labyrinthe(labyrinthe, courant);
            courant.x -= 1;
        }
    }
    
    if (courant.y + 1 < TAILLE_LABYRINTHE && labyrinthe[courant.y + 1][courant.x].distance == -1)
    {
        nombre_alea = rand() % (2 + labyrinthe[courant.y][courant.x].distance / 2);

        if (nombre_alea == 0)
        {
            labyrinthe[courant.y][courant.x].bas = 1;
            labyrinthe[courant.y + 1][courant.x].distance = labyrinthe[courant.y][courant.x].distance + 1;
            courant.y += 1;
            creation_prototype_labyrinthe(labyrinthe, courant);
            courant.y -= 1;
        }
    }
    
    if (courant.x - 1 >= 0 && labyrinthe[courant.y][courant.x - 1].distance == -1)
    {
        nombre_alea = rand() % (2 + labyrinthe[courant.y][courant.x].distance / 2);

        if (nombre_alea == 0)
        {
            labyrinthe[courant.y][courant.x].gauche = 1;
            labyrinthe[courant.y][courant.x - 1].distance = labyrinthe[courant.y][courant.x].distance + 1;
            courant.x -= 1;
            creation_prototype_labyrinthe(labyrinthe, courant);
            courant.x += 1;
        }
    }
}
