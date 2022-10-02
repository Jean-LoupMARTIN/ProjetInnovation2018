
#include "Header.h"

void placer_salle(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Liste_enemie* enemies, case_labyrinthe labyrithe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], int niveau, Coor perso)
{
    int i, j;
    Coor centre_chunk;
    int proba_fantome;
    
    for (i = 0; i < TAILLE_LABYRINTHE; i++)
    {
        for (j = 0; j < TAILLE_LABYRINTHE; j++)
        {
            centre_chunk.x = (TAILLE_D_UN_CHUNK-1) / 2 + (TAILLE_D_UN_CHUNK-1) + j * (TAILLE_D_UN_CHUNK-1);
            centre_chunk.y = (TAILLE_D_UN_CHUNK-1) / 2 + (TAILLE_D_UN_CHUNK-1) + i * (TAILLE_D_UN_CHUNK-1);
            
            if (labyrithe[i][j].type_de_salle == 1)
            {
                creation_petit_plateau(carte, centre_chunk, labyrithe);
                
                if (niveau != 1)
                {
                    carte[centre_chunk.x][centre_chunk.y].decor = 'e';
                }
            }
            else if (labyrithe[i][j].type_de_salle == 2)
            {
                creation_petit_plateau(carte, centre_chunk, labyrithe);
                carte[centre_chunk.x][centre_chunk.y].objet = 'E';
            }
            else if (labyrithe[i][j].type_de_salle == 3)
            {
                creation_plateau_alea(carte, enemies, centre_chunk, labyrithe, niveau, perso);
            }
            else if (labyrithe[i][j].type_de_salle == 4)
            {
                creation_petit_plateau(carte, centre_chunk, labyrithe);
                carte[centre_chunk.x][centre_chunk.y].objet = 'C';

                switch (niveau)
                {
                    case 1:
                        proba_fantome = PROBA_FANTOME_1;
                        break;
                    case 2:
                        proba_fantome = PROBA_FANTOME_2;
                        break;
                    case 3:
                        proba_fantome = PROBA_FANTOME_3;
                        break;
                    case 4:
                        proba_fantome = PROBA_FANTOME_4;
                        break;
                    case 5:
                        proba_fantome = PROBA_FANTOME_5;
                        break;
                    default:
                        proba_fantome = PROBA_FANTOME_6;
                        break;
                }
                ajouter_monstre(carte, enemies, centre_chunk, TAILLE_PETIT_PLATEAU, TAILLE_PETIT_PLATEAU, proba_fantome, 'n', niveau, perso);
            }
            else if (labyrithe[i][j].type_de_salle == 5)
            {
                creation_salle_couloir(carte, enemies, centre_chunk, labyrithe, niveau, perso);
            }
            else if (labyrithe[i][j].type_de_salle == 6)
            {
                creation_salle_begnet(carte, centre_chunk, labyrithe);
            }
            else if (labyrithe[i][j].type_de_salle == 7)
            {
                creation_salle_horde(carte, enemies, centre_chunk, labyrithe, niveau, perso);
            }
            else if (labyrithe[i][j].type_de_salle == 8)
            {
                creation_salle_dragon(carte, enemies, centre_chunk, labyrithe, niveau, perso);
            }
            else if (labyrithe[i][j].type_de_salle == 9)
            {
                creation_salle_ombre(carte, enemies, centre_chunk, labyrithe, niveau, perso);
            }
            else if (labyrithe[i][j].type_de_salle == 10)
            {
                creation_petit_plateau(carte, centre_chunk, labyrithe);
                ajouter_monstre(carte, enemies, centre_chunk, TAILLE_PETIT_PLATEAU, TAILLE_PETIT_PLATEAU, PROBA_LUTIN_SALLE_LUTIN, 'i', niveau, perso);
            }
            else if (labyrithe[i][j].type_de_salle == 11)
            {
                creation_salle_goblin(carte, enemies, centre_chunk, labyrithe, niveau, perso);
            }
        }
    }
}
