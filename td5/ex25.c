#include "td5.h"

LISTE*	inserer_fin_iter(LISTE *l, int val)
{
	if (! l)
		return (nouvel_elem(val));
	LISTE *l0;
	
	l0 = l;
	while (l->suiv)
		l = l->suiv;
	l->suiv = nouvel_elem(val);
	return (l0);
}

LISTE*	inserer_fin_rec(LISTE *l, int val)
{
	if (! l)
		return (nouvel_elem(val));
	else if (! l->suiv)
		l->suiv = nouvel_elem(val);
	else
		inserer_fin_rec(l->suiv, val);
	return (l);
}

LISTE*	supprimer_fin_iter(LISTE *l)
{
	if (! l)
		return (l);
	LISTE *l0, *l1;
	
	l0 = l;
	l1 = l;
	while (l->suiv)
	{
		l1 = l;
		l = l->suiv;
	}
	free(l);
	l1->suiv = NULL;
	if (l0 == l1)
	{
		free(l0);
		l0 = NULL;
	}
	return (l0);
}

/*LISTE*	supprimer_fin_rec(LISTE *l, int val)
{
	if (! l)
		return (l);
	return (l);
}*/
