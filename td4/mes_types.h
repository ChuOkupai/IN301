#ifndef	_MES_TYPES_H
# define	_MES_TYPES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct tabint
{
	int	*T; // Pointeur vers le tableau
	int	N;  // Taille du tableau
}	TABINT;

/* crée et remplit un tableau de N cases avec
 * les valeurs comprises dans l’intervalle 0..K */
TABINT	gen_alea_tabint(int N, int K);

/* désalloue un tableau */
void	sup_tabint(TABINT T);

/* affiche un tableau */
void	aff_tabint(TABINT T);

/* recherche le max dans un tableau entre 
 * les indices deb et fin inclus et renvoie
 * l’indice de la case qui contient le max */
int	max_tabint(TABINT T, int deb, int fin);

/* échange le contenu de deux cases du tableau */
TABINT	ech_tabint(TABINT T, int i, int j);

/* recherche la position du max entre le début
 * et un indice fin puis échange le contenu de
 * la case du max avec la case fin */
TABINT	sel_max_tabint(TABINT T, int fin);

/* tri le tableau */
TABINT	tri_sel_tabint(TABINT T);

#endif	// _MES_TYPES_H
