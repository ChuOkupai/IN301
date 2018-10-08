#include "mes_types.h"

int	main(void)
{
	TABINT	T;
	
	srand(getpid());
	T = gen_alea_tabint(10, 1000);
	if (! T.T)
		return (1);
		
	aff_tabint(T);
	T = tri_sel_tabint(T);
	aff_tabint(T);
	sup_tabint(T);
	return (0);
}
