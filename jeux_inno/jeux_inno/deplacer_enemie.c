
#include "Header.h"

void deplacer_enemie(Case_carte carte[TAILLE_CARTE][TAILLE_CARTE],
                     Liste_enemie* enemies,
                     Coor perso)
{
    int nombre_alea;
    
    if (enemies != NULL)
    {
        Element *actuel = enemies->premier;
        while (actuel != NULL)
        {
            nombre_alea = rand() % actuel->enemie.vitesse;
            
            if (nombre_alea == 0)
            {
                switch (actuel->enemie.intelligence)
                {
                    case 0:      
                        deplacement_alea(carte, &(actuel->enemie), perso);
                        break;
                        
                    case 1:
                        deplacement_strategique_1(carte, &(actuel->enemie), perso);
                        break;
                        
                    case 2:
                        deplacement_strategique_2(carte, &(actuel->enemie), perso);
                        break;

                    case 3:
                        deplacement_strategique_3(carte, &(actuel->enemie), perso);
                        break;
                        
                    case 4:
                        deplacement_strategique_4(carte, &(actuel->enemie), perso);
                        break;
                        
                    default:
                        break;
                }
            }
            actuel = actuel->suivant;
        }
    }
}
