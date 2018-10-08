#ifndef		_MES_TYPES_H
# define	_MES_TYPES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct tabint
{
	int	*T; // Pointeur vers le tableau
	int	N;  // Taille du tableau
}	TABINT;

typedef struct stat
{
	float nb_moy_comp;
	float nb_moy_ech;
}	STAT;

/* crée et remplit un tableau de N cases avec
 * les valeurs comprises dans l’intervalle 0..K */
TABINT	gen_alea_tabint(int N, int K);

/* remplit un tableau de T.N cases avec
 * les valeurs comprises dans l’intervalle 0..K
 * dans l'ordre décroissant */
TABINT	gen_croissant_tabint(TABINT T, int K);

/* remplit un tableau de T.N cases avec
 * les valeurs comprises dans l’intervalle 0..K
 * dans l'ordre croissant */
TABINT	gen_decroissant_tabint(TABINT T, int K);

/* désalloue un tableau */
void	sup_tabint(TABINT T);

/* affiche un tableau */
void	aff_tabint(TABINT T);

/* teste le contenu d’une case i du tableau avec celui
 * de la case suivante i + 1.
 * Les échanges si T.T[i] < T.T[i + 1] */
TABINT	ech_tabint(TABINT T, int i);

/* parcourt le tableau du début jusqu’à l’indice fin et
 * effectue l’échange de la fonction précédente pour
 * toute les cases de 0 à fin - 1 */
TABINT	scan_ech_tabint(TABINT T, int fin);

/* tri le tableau avec un tri à bulle */
TABINT	tri_bulle_tabint(TABINT T);

/* affiche le nombre de comparaisons */
void	print_comp();

/* affiche le nombre d'échanges */
void	print_ech();

/* affiche le nombre de comparaisons et d'échanges */
void	print_stats();

/* réinitialise le nombre de comparaisons et d'échanges */
void	reset_stats();

#endif	// _MES_TYPES_H
