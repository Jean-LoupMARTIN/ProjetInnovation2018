
#include "Header.h"

void porte_tunnel(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], char element, int proba, int bool_pylone, char pylone)
{
    int i;
    int moitie_hauteur = (hauteur-1)/2;
    int moitie_largeur = (largeur-1)/2;
    int nombre_alea;

    Coor case_laby;
    case_laby.x = (centre.x - MOITIE_TAILLE_CHUNK) / TAILLE_D_UN_CHUNK;
    case_laby.y = (centre.y - MOITIE_TAILLE_CHUNK) / TAILLE_D_UN_CHUNK;

    
    
    if (labyrinthe[case_laby.y][case_laby.x].haut == 1 || labyrinthe[case_laby.y-1][case_laby.x].bas == 1)
    {
        for (i = 0; i < TAILLE_TUNNEL; i++)
        {
            if (i == 0 || i == TAILLE_TUNNEL-1)
            {
                if (bool_pylone == 1)
                {
                    carte[centre.x - MOITIE_TAILLE_TUNNEL + i][centre.y - moitie_hauteur].objet = pylone;
                }
            }
            else
            {
                nombre_alea = rand() % proba;
                
                if (nombre_alea == 0)
                {
                    carte[centre.x - MOITIE_TAILLE_TUNNEL + i][centre.y - moitie_hauteur].decor = element;
                }
            }
        }
    }
    if (labyrinthe[case_laby.y][case_laby.x].bas == 1 || labyrinthe[case_laby.y+1][case_laby.x].haut == 1)
    {
        for (i = 0; i < TAILLE_TUNNEL; i++)
        {
            if (i == 0 || i == TAILLE_TUNNEL-1)
            {
                if (bool_pylone == 1)
                {
                    carte[centre.x - MOITIE_TAILLE_TUNNEL + i][centre.y + moitie_hauteur].objet = pylone;
                }
            }
            else
            {
                nombre_alea = rand() % proba;
                
                if (nombre_alea == 0)
                {
                    carte[centre.x - MOITIE_TAILLE_TUNNEL + i][centre.y + moitie_hauteur].decor = element;
                }
            }
        }
    }
    if (labyrinthe[case_laby.y][case_laby.x].droite == 1 || labyrinthe[case_laby.y][case_laby.x+1].gauche == 1)
    {
        for (i = 0; i < TAILLE_TUNNEL; i++)
        {
            if (i == 0 || i == TAILLE_TUNNEL-1)
            {
                if (bool_pylone == 1)
                {
                    carte[centre.x + moitie_largeur ][centre.y - MOITIE_TAILLE_TUNNEL + i].objet = pylone;
                }
            }
            else
            {
                nombre_alea = rand() % proba;
                
                if (nombre_alea == 0)
                {
                    carte[centre.x + moitie_largeur ][centre.y - MOITIE_TAILLE_TUNNEL + i].decor = element;
                }
            }
        }
    }
    if (labyrinthe[case_laby.y][case_laby.x].gauche == 1 || labyrinthe[case_laby.y][case_laby.x-1].droite == 1)
    {
        for (i = 0; i < TAILLE_TUNNEL; i++)
        {
            if (i == 0 || i == TAILLE_TUNNEL-1)
            {
                if (bool_pylone == 1)
                {
                    carte[centre.x - moitie_largeur][centre.y - MOITIE_TAILLE_TUNNEL + i].objet = pylone;
                }
            }
            else
            {
                nombre_alea = rand() % proba;
                
                if (nombre_alea == 0)
                {
                    carte[centre.x - moitie_largeur][centre.y - MOITIE_TAILLE_TUNNEL + i].decor = element;
                }
            }
        }
    }
}
