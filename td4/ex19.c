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
	T = tri_bulle_tabint(T);
	print_stats();
	reset_stats();
	T = gen_croissant_tabint(T, K);
	aff_tabint(T);
	T = tri_bulle_tabint(T);
	print_stats();
	reset_stats();
	T = gen_decroissant_tabint(T, K);
	aff_tabint(T);
	T = tri_bulle_tabint(T);
	print_stats();
	aff_tabint(T);
	sup_tabint(T);
	return (0);
}
