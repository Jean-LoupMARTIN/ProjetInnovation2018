
#include "Header.h"

void placer_tunnels(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], char element1, char element2, int proba_sol, int proba_mur)
{
    int i, j ,k, l;
    int nombre_alea;
    Coor centre_chunk;
    
    for (i=0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j=0; j < TAILLE_LABYRINTHE; j++)
        {
            centre_chunk.x = MOITIE_TAILLE_CHUNK + (TAILLE_D_UN_CHUNK-1) + j * (TAILLE_D_UN_CHUNK-1);
            centre_chunk.y = MOITIE_TAILLE_CHUNK + (TAILLE_D_UN_CHUNK-1) + i * (TAILLE_D_UN_CHUNK-1);
            
            if (j+1 < TAILLE_LABYRINTHE && (labyrithe[i][j].droite == 1 || labyrithe[i][j+1].gauche == 1))
            {
                for (k=0; k < (TAILLE_D_UN_CHUNK - 2*MOITIE_TAILLE_TUNNEL); k++)
                {
                    for (l=0; l < TAILLE_TUNNEL; l++)
                    {
                        if (l == 0 || l == TAILLE_TUNNEL-1)
                        {
                            nombre_alea = rand() % proba_mur;
                            if (nombre_alea == 0)
                            {
                                carte[centre_chunk.x + MOITIE_TAILLE_TUNNEL + k][centre_chunk.y - MOITIE_TAILLE_TUNNEL + l].decor = element2;
                            }
                        }
                        else
                        {
                            nombre_alea = rand() % proba_sol;
                            if (nombre_alea == 0)
                            {
                                carte[centre_chunk.x + MOITIE_TAILLE_TUNNEL + k][centre_chunk.y - MOITIE_TAILLE_TUNNEL + l].decor = element1;
                            }
                        }
                    }
                }
            }
            if (i+1 < TAILLE_LABYRINTHE && (labyrithe[i][j].bas == 1 || labyrithe[i+1][j].haut == 1))
            {
                for (k=0; k < (TAILLE_D_UN_CHUNK - 2*MOITIE_TAILLE_TUNNEL); k++)
                {
                    for (l=0; l < TAILLE_TUNNEL; l++)
                    {
                        if (l == 0 || l == TAILLE_TUNNEL-1)
                        {
                            nombre_alea = rand() % proba_mur;
                            
                            if (nombre_alea == 0)
                            {
                                carte[centre_chunk.x - MOITIE_TAILLE_TUNNEL + l][centre_chunk.y + MOITIE_TAILLE_TUNNEL + k].decor = element2;
                            }
                        }
                        else
                        {
                            nombre_alea = rand() % proba_sol;
                            
                            if (nombre_alea == 0)
                            {
                                carte[centre_chunk.x - MOITIE_TAILLE_TUNNEL + l][centre_chunk.y + MOITIE_TAILLE_TUNNEL + k].decor = element1;
                            }
                        }
                    }
                }
            }
        }
    }
}
