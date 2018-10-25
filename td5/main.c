#include "td5.h"

LISTE*	genere_liste(int n, int m)
{
	LISTE *l;
	
	for (l = NULL; n > 0; n--)
		l = inserer_deb(l, m);
	return (l);
}

LISTE*	genere_liste_alea(int n, int r)
{
	LISTE *l;
	
	for (l = NULL; n > 0; n--)
		l = inserer_deb(l, rand() % r);
	return (l);
}

void	test_concat(int n, int r)
{
	LISTE *l1, *l2;
	
	srand(getpid());
	l1 = genere_liste_alea(n / 2, r);
	printf("Liste l1:\n");
	affiche_rec(l1);
	l2 = genere_liste_alea(n / 2, r);
	printf("Liste l2:\n");
	affiche_rec(l2);
	l1 = concat(l1, l2);
	printf("Concat l1 et l2:\n");
	affiche_rec(l1);
}

void	test_uniq(void)
{
	LISTE *l = NULL;
	
	l = genere_liste(9, 42);
	l = inserer_fin_rec(l, 43);
	affiche_rec(l);
	l = uniq(l);
	affiche_rec(l);
}

int	main(void)
{
	srand(getpid());
	test_concat(4, 100);
	test_uniq();
	return (0);
}
