
#include "Header.h"

void salle_plus(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, char element)
{
    int moitie_hauteur = (hauteur-1)/2;
    int moitie_largeur = (largeur-1)/2;
    int taille_couronne = 4 + rand() % 3;
    int hauteur_rectangle = 7 + 2*(rand() % 4);
    int largeur_rectangle = 7 + 2*(rand() % 4);
    int taille_couronne_rectange = 3;
    int moitie_hauteur_rectangle = (hauteur_rectangle-1)/2;
    int moitie_largeur_rectangle = (largeur_rectangle-1)/2;

    Coor centre_rectangle;
    
    
    
    centre_rectangle.x = centre.x + moitie_largeur - taille_couronne+1 - moitie_largeur_rectangle;
    centre_rectangle.y = centre.y - moitie_hauteur + taille_couronne-1 + moitie_hauteur_rectangle;
    
    rectangle(carte, centre_rectangle, hauteur_rectangle, largeur_rectangle, 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1) - 2, largeur_rectangle-2*(taille_couronne_rectange-1) - 2, '.', "rempli", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2, largeur_rectangle-2, element, "rempli", 1, "objet");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), '.', "rempli", 1, "objet");
    
    
    
    
    centre_rectangle.x = centre.x - moitie_largeur + taille_couronne-1 + moitie_largeur_rectangle;
    centre_rectangle.y = centre.y + moitie_hauteur - taille_couronne+1 - moitie_hauteur_rectangle;
    
    rectangle(carte, centre_rectangle, hauteur_rectangle, largeur_rectangle, 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1) - 2, largeur_rectangle-2*(taille_couronne_rectange-1) - 2, '.', "rempli", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2, largeur_rectangle-2, element, "rempli", 1, "objet");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), '.', "rempli", 1, "objet");
    
    
    
    centre_rectangle.x = centre.x + moitie_largeur - taille_couronne+1 - moitie_largeur_rectangle;
    centre_rectangle.y = centre.y + moitie_hauteur - taille_couronne+1 - moitie_hauteur_rectangle;

    rectangle(carte, centre_rectangle, hauteur_rectangle, largeur_rectangle, 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1) - 2, largeur_rectangle-2*(taille_couronne_rectange-1) - 2, '.', "rempli", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2, largeur_rectangle-2, element, "rempli", 1, "objet");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), '.', "rempli", 1, "objet");
    
    
    
    centre_rectangle.x = centre.x - moitie_largeur + taille_couronne-1 + moitie_largeur_rectangle;
    centre_rectangle.y = centre.y - moitie_hauteur + taille_couronne-1 + moitie_hauteur_rectangle;
    
    rectangle(carte, centre_rectangle, hauteur_rectangle, largeur_rectangle, 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), 'X', "contour", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1) - 2, largeur_rectangle-2*(taille_couronne_rectange-1) - 2, '.', "rempli", 1, "decor");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2, largeur_rectangle-2, element, "rempli", 1, "objet");
    rectangle(carte, centre_rectangle, hauteur_rectangle-2*(taille_couronne_rectange-1), largeur_rectangle-2*(taille_couronne_rectange-1), '.', "rempli", 1, "objet");
}










