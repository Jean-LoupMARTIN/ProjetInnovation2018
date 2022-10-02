

/*
 inspirer des ancien ZELDA, de soul knght, et du mythe grec du labyrinthe
 
 enemie qui se deplace sur un paterne fixe (genre une scie)
 
 changer le truc avec le renderer (faire conste)
 
 afficher niveau
 
 afficher le meilleur score et meilleur niv dans menu principal
 
 afficher le score et niv a l ecran quand on joue
 
 menu debut jeux
 
 le jeux plente
 
 piege (mur invisible qui apparaisse)
 
 salle piege
  
 musique
 
 piege : mur qui s active quand le joueur est proche de lui (1 ou 2 case par ex) : enmie qui ne bouge pas (intell = -1), qui resemble au sol quand on est loin de lui et qui se leve quand trop proche. (salle labyrinthe avec mur proche qui se leve)
 
 faire enemie taupe (comme les piege mais avec intell 3) et les integre a la salle "labyrinthe"
 
 
 il y aura pb affichage a caude des perspective -> faire carte_enemie qu on modifie une foi par tour de boucle avec liste enemie (modifier pd deplacement des enemie) puis lors de l affichage on regade carte, carte_objet puis carte enemie en affichant puis on passe a la case suivante
 
 faire une seule carte avec tt : decore(char), objet(char), enemie(enemie) (/!\ garder la liste enemie pour les deplacement et attaque), et hero(int = 1 si coor de mon hero)
 
 "quand il y a du reperage ca marche pas 8" cf:Tristan
 ////////////////////////////////////////////////////// NOMANCLATURE //////////////////////////////////////////////////////
 
 les different type de salle :
 
 1 = salle de depart
 2 = salle d arrive
 3 = salle alea (monstre)
 4 = salle coffre
 5 = salle prolongation de couloir
 6 = salle begnet
 7 = salle horde
 8 = salle dragon
 9 = salle ombre
 10 = salle lutin
 11 = salle goblin

 
 
 les remplissage salles aleatoires
 
 [0] = proba salle alea
 [1] = proba salle coffre
 [2] = proba salle prolongation de couloir
 [3] = proba salle begnet
 [4] = proba salle horde
 [5] = proba salle ombre
 [6] = proba salle lutin
 [7] = proba salle goblin
 [8] = proba salle dragon

 
 
 les different caracteres :
 
 '.' = vide
 'X' = mur 1
 'x' = mur 2
 ' ' = espace libre
 '-' = espace libre 2
 '_' = espace libre 3
 ')' = espace libre 4
 '<','>','^','v' = hero
 'C' = coffre ferme
 'c' = coffre ouvert
 'L' = coffre special ferme
 'l' = coffre special ouvert
 'E' = echelle (arrivee)
 'e' = echelle (depart)
 'B' = brique (mur qui se casse)
 'A' = element deco 1 : arbre
 'S' = element deco 2 : serveur
 'P' = element deco 3 : pylone
 ':' = element deco 4 : mur pont
 '=' = element deco 5 : pont
 'F' = element deco 6 : fleur
 'T' = element deco 7 : tapi_1
 't' = element deco 8 : tapi_2
 
 'g' = garde
 'G' = garde d elite
 's' = slim
 'M' = minautor !
 'Z' = un gros slim ?
 'n' = fantome
 'm' = mage de glace
 'i' = lutin
 'N' = liche
 'w' = gnome lepreux
 'u' = goblin
 'D' = dragon
 'd' = flamme

 
 les remplissage salles aleatoires
 
 [0] = proba modif vide
 [1] = proba modif cible vide
 [2] = proba modif cible case

 2 : salle rempli mur
 3 : salle rempli case
 4 : salle croix tronquée
 5 : salle grosse croix
 6 : salle grosse croix inversée
 7 : salle case aleatoire
 8 : salle petit rect de case
 9 : salle gros rect
 
*/
