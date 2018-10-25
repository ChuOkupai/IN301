#include "td5.h"

/*LISTE*	retourner(LISTE *l)
{
	
}*/

LISTE*	concat(LISTE *l1, LISTE *l2)
{
	if (! (l1 || l2))
		return (l1);
	if (l1->suiv)
		concat(l1->suiv, l2);
	else
		l1->suiv = l2;
	return (l1);
}

LISTE*	fusion(LISTE *l1, LISTE *l2)
{
	LISTE *l;
	
	if (l1->val < l2->val);
	return (l1);
}

LISTE*	uniq(LISTE *l)
{
	if (! (l && l->suiv))
		return (l);
	if (l->val == l->suiv->val)
	{
		l = supprimer_deb(l);
		return (l = uniq(l));
	}
	l->suiv = uniq(l->suiv);
	return (l);
}

/*LISTE*	tri_a_bulle(LISTE *l)
{
	
}*/
