#include "td5.h"

LISTE*	supprimer_mil_iter(LISTE *l, int val)
{
	if (! l)
		return (l);
	LISTE *l0;
	
	l0 = l;
	if (l->val == val)
		return (supprimer_deb(l));
	while (l->suiv && l->suiv->val != val)
		l = l->suiv;
	if (l->suiv)
		l->suiv = supprimer_deb(l->suiv);
	return (l0);
}

LISTE*	supprimer_mil_rec(LISTE *l, int val)
{
	if (! l)
		return (l);
	if (l->val == val)
		return (supprimer_deb(l));
	l->suiv = supprimer_mil_rec(l->suiv, val);
	return (l);
}

LISTE*	inserer_trie_rec(LISTE *l, int val)
{
	if ((! l) || (val <= l->val))
		return (inserer_deb(l, val));
	l->suiv = inserer_trie_rec(l->suiv, val);
	return (l);
}
