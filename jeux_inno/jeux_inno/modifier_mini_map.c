
#include "Header.h"

void modifier_mini_map(case_labyrinthe labyrinthe[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE], Hero perso, case_labyrinthe mini_map[TAILLE_LABYRINTHE][TAILLE_LABYRINTHE])
{
    int position_perso_laby_x = (perso.position.x + 4 - TAILLE_D_UN_CHUNK) / TAILLE_D_UN_CHUNK;
    int position_perso_laby_y = (perso.position.y + 4 - TAILLE_D_UN_CHUNK) / TAILLE_D_UN_CHUNK;
    
    mini_map[position_perso_laby_y][position_perso_laby_x] = labyrinthe[position_perso_laby_y][position_perso_laby_x];
    
    mini_map[position_perso_laby_y][position_perso_laby_x+1].gauche = labyrinthe[position_perso_laby_y][position_perso_laby_x+1].gauche;
    mini_map[position_perso_laby_y][position_perso_laby_x-1].droite = labyrinthe[position_perso_laby_y][position_perso_laby_x-1].droite;
    mini_map[position_perso_laby_y+1][position_perso_laby_x].haut = labyrinthe[position_perso_laby_y+1][position_perso_laby_x].haut;
    mini_map[position_perso_laby_y-1][position_perso_laby_x].bas = labyrinthe[position_perso_laby_y-1][position_perso_laby_x].bas;
}
