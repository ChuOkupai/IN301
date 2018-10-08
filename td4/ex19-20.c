#include "mes_types.h"
#define N	10
#define	K	1000

int	main(void)
{
	TABINT	T;
	
	srand(getpid());
	T = gen_alea_tabint(N, K);
	if (! T.T)
		return (1);
	aff_tabint(T);
	// Tableau aléatoire
	tri_bulle_tabint(T);
	print_comp_ech();
	reset_comp_ech();
	// Tableau aléatoire croissant (meilleur cas)
	gen_croissant_tabint(T, K);
	aff_tabint(T);
	tri_bulle_tabint(T);
	print_comp_ech();
	reset_comp_ech();
	// Tableau aléatoire croissant (pire cas)
	gen_decroissant_tabint(T, K);
	aff_tabint(T);
	tri_bulle_tabint(T);
	print_comp_ech();
	aff_tabint(T);
	sup_tabint(T);
	return (0);
}
