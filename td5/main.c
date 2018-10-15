#include "td5.h"

int	main(void)
{
	LISTE *l = NULL;
	
	l = inserer_deb(l, 23);
	l = inserer_deb(l, 42);
	l = inserer_deb(l, 17);
	affiche_rec(l);
	printf("nb elem = %d\n", nb_elem_rec(l));
	printf("42 présent : %d\n", est_present_rec(l, 42));
	return (0);
}
