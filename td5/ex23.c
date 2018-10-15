#include "td5.h"

void	affiche_iter(LISTE *l)
{
	while (l)
	{
		printf("%d ", l->val);
		l = l->suiv;
	}
	putchar('\n');
}

void	affiche_rec(LISTE *l)
{
	if (! l)
	{
		putchar('\n');
		return;
	}
	printf("%d ", l->val);
	affiche_rec(l->suiv);
}

int	nb_elem_iter(LISTE *l)
{
	int n;
	
	for (n = 0; l; n++)
		l = l->suiv;
	return (n);
}

int	nb_elem_rec(LISTE *l)
{
	if (l)
		return (1 + nb_elem_rec(l->suiv));
	return (0);
}

int	est_present_iter(LISTE *l, int val)
{
	while (l)
	{
		if (l->val == val)
			return (1);
		l = l->suiv;
	}
	return (0);
}

int	est_present_rec(LISTE *l, int val)
{
	if (! l)
		return (0);
	if (l->val == val)
		return (1);
	return (est_present_rec(l->suiv, val));
}
