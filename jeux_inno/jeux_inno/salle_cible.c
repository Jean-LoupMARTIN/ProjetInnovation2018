
#include "Header.h"

void salle_cible(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur)
{
    int taille_couronne = 5 + rand() % 5;
    int longeur_tunnel = 3 + rand() % 2;
    int largeur_tunnel = 3 + 2 * (rand() % 5);
    int nombre_alea;
    
    rectangle(carte, centre, hauteur - 2*(taille_couronne-1), largeur - 2*(taille_couronne-1), 'X', "contour", 1, "decor");
    
    nombre_alea = rand() % 2;

    if (nombre_alea == 0)
    {
        rectangle(carte, centre, hauteur - 2*(taille_couronne-1) - 2, largeur - 2*(taille_couronne-1) - 2, '.', "rempli", 1, "decor");
    }
    else
    {
        rectangle(carte, centre, hauteur - 2*(taille_couronne-1) - 2, largeur - 2*(taille_couronne-1) - 2, 'A', "rempli", 1, "decor");
    }

    nombre_alea = rand() % 2;
    
    if (nombre_alea == 0)
    {
        rectangle(carte, centre, hauteur - 2*(taille_couronne), largeur_tunnel, ':', "contour", 1, "decor");
        rectangle(carte, centre, largeur_tunnel, largeur - 2*(taille_couronne), ':', "contour", 1, "decor");
        rectangle(carte, centre, hauteur - 2*(taille_couronne), largeur_tunnel-2, '=', "rempli", 1, "decor");
        rectangle(carte, centre, largeur_tunnel-2, largeur - 2*(taille_couronne), '=', "rempli", 1, "decor");
    }
    else
    {
        rectangle(carte, centre, hauteur - 2*(taille_couronne), largeur_tunnel, 'X', "contour", 1, "decor");
        rectangle(carte, centre, largeur_tunnel, largeur - 2*(taille_couronne), 'X', "contour", 1, "decor");
        rectangle(carte, centre, hauteur - 2*(taille_couronne), largeur_tunnel-2, ' ', "rempli", 1, "decor");
        rectangle(carte, centre, largeur_tunnel-2, largeur - 2*(taille_couronne), ' ', "rempli", 1, "decor");
    }
    
    rectangle(carte, centre, hauteur - 2*((taille_couronne-1)+longeur_tunnel-1), largeur - 2*((taille_couronne-1)+longeur_tunnel-1), 'X', "contour", 1, "decor");
    rectangle(carte, centre, hauteur - 2*((taille_couronne-1)+longeur_tunnel-1) - 2, largeur - 2*((taille_couronne-1)+longeur_tunnel-1) - 2, ' ', "rempli", 1, "decor");
    
    if (nombre_alea == 0)
    {
        porte_tunnel_salle_cible(carte, centre, hauteur - 2*(taille_couronne-1), largeur - 2*(taille_couronne-1), largeur_tunnel, '=', 1, 1, 'P');
        
        porte_tunnel_salle_cible(carte, centre, hauteur - 2*((taille_couronne-1)+longeur_tunnel-1), largeur - 2*((taille_couronne-1)+longeur_tunnel-1), largeur_tunnel, '=', 1, 1, 'P');
    }
    else
    {
        porte_tunnel_salle_cible(carte, centre, hauteur - 2*(taille_couronne-1), largeur - 2*(taille_couronne-1), largeur_tunnel, ' ', 1, -1, 'P');
        
        porte_tunnel_salle_cible(carte, centre, hauteur - 2*((taille_couronne-1)+longeur_tunnel-1), largeur - 2*((taille_couronne-1)+longeur_tunnel-1), largeur_tunnel, ' ', 1, -1, 'P');
    }
}
