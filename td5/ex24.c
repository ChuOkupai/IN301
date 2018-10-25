#include "td5.h"

LISTE*	nouvel_elem(int n)
{
	LISTE *l;
	
	l = malloc(sizeof(LISTE*));
	if (! l)
		return (l);
	l->val = n;
	l->suiv = NULL;
	return (l);
}

LISTE*	inserer_deb(LISTE *l, int val)
{
	LISTE *l0;
	
	l0 = nouvel_elem(val);
	l0->suiv = l;
	return (l0);
}

LISTE*	supprimer_deb(LISTE *l)
{
	if (! l)
		return (l);
	LISTE *l0;
	
	l0 = l->suiv;
	free(l);
	return (l0);
}
