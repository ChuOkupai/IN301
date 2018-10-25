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

LISTE*	nouvel_elem(int n);

LISTE*	inserer_deb(LISTE *l, int val);

LISTE*	supprimer_deb(LISTE *l);

/** ex25 **/

LISTE*	inserer_fin_iter(LISTE *l, int val);

LISTE*	inserer_fin_rec(LISTE *l, int val);

LISTE*	supprimer_fin_iter(LISTE *l);

LISTE*	supprimer_fin_rec(LISTE *l);

/** ex26 **/

LISTE*	supprimer_mil_iter(LISTE *l, int val);

LISTE*	supprimer_mil_rec(LISTE *l, int val);

LISTE*	inserer_trie_rec(LISTE *l, int val);

/** ex27 **/

LISTE*	retourner(LISTE *l);

LISTE*	concat(LISTE *l1, LISTE *l2);

LISTE*	fusion(LISTE *l1, LISTE *l2);

LISTE*	uniq(LISTE *l);

LISTE*	tri_a_bulle(LISTE *l);

#endif	// _TD_5_H
