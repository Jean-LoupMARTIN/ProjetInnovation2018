
#include "Header.h"

void porte_tunnel_salle_cible(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE], Coor centre, int hauteur, int largeur, int largeur_tunnel, char element, int proba, int bool_pylone, char pylone)
{
    int i;
    int moitie_hauteur = (hauteur-1)/2;
    int moitie_largeur = (largeur-1)/2;
    int moitie_largeur_tunnel = (largeur_tunnel-1)/2;
    int nombre_alea = -1;
    
    
    for (i = 0; i < largeur_tunnel; i++)
    {
        if (i == 0 || i == largeur_tunnel-1)
        {
            if (bool_pylone == 1)
            {
                carte[centre.x - moitie_largeur_tunnel + i][centre.y - moitie_hauteur].objet = pylone;
                carte[centre.x - moitie_largeur][centre.y - moitie_largeur_tunnel + i].objet = pylone;
                carte[centre.x + moitie_largeur ][centre.y - moitie_largeur_tunnel + i].objet = pylone;
                carte[centre.x - moitie_largeur_tunnel + i][centre.y + moitie_hauteur].objet = pylone;
            }
        }
        else
        {
            if (proba != -1)
            {
                nombre_alea = rand() % proba;
            }
            
            if (nombre_alea == 0)
            {
                carte[centre.x - moitie_largeur_tunnel + i][centre.y - moitie_hauteur].decor = element;
            }
            
            if (proba != -1)
            {
                nombre_alea = rand() % proba;
            }
            
            if (nombre_alea == 0)
            {
                carte[centre.x - moitie_largeur_tunnel + i][centre.y + moitie_hauteur].decor = element;
            }
            
            if (proba != -1)
            {
                nombre_alea = rand() % proba;
            }
            
            if (nombre_alea == 0)
            {
                carte[centre.x + moitie_largeur ][centre.y - moitie_largeur_tunnel + i].decor = element;
            }
            
            if (proba != -1)
            {
                nombre_alea = rand() % proba;
            }
            
            if (nombre_alea == 0)
            {
                carte[centre.x - moitie_largeur][centre.y - moitie_largeur_tunnel + i].decor = element;
            }
        }
    }
}
