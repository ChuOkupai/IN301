#ifndef		_TD_5_H
# define	_TD_5_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct liste LISTE;

struct liste
{
	int		val;	// Valeur stockée
	LISTE	*suiv;	// Pointeur vers le suivant
};

/** ex23 **/

void	affiche_iter(LISTE *l);

void	affiche_rec(LISTE *l);

int	nb_elem_iter(LISTE *l);

int	nb_elem_rec(LISTE *l);

int	est_present_iter(LISTE *l, int val);

int	est_present_rec(LISTE *l, int val);

/** ex24 **/

LISTE*	inserer_deb(LISTE *l, int val);

#endif	// _TD_5_H
