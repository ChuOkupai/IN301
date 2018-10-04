#include "mes_types.h"

TABINT	gen_alea_tabint(int N, int K)
{
	TABINT	T;
	
	T.T = NULL;
	T.T = malloc(N * sizeof(int));
	if (! T.T)
		return (T);
	for (int i = 0; i < N; i++)
		T.T[i] = rand() % K;
	T.N = N;
	return T;
}

void	sup_tabint(TABINT T)
{
	free(T.T);
}

void	aff_tabint(TABINT T)
{
	for (int i = 0; i < T.N; i++)
	{
		printf("%d", T.T[i]);
		if (i + 1 < T.N)
		{
			printf(",");
			if (i % 10)
				printf(" ");
			else if (i > 0)
				printf("\n");
		}
	}
	printf(".\n");
}

int	max_tabint(TABINT T, int deb, int fin)
{
	int	imax;
	
	imax = deb;
	for (int i = deb + 1; i <= fin; i++)
		if (T.T[i] > T.T[imax])
			imax = i;
	return (imax);
}

TABINT	ech_tabint(TABINT T, int i, int j)
{
	int	k;
	
	k = T.T[i];
	T.T[i] = T.T[j];
	T.T[j] = k;
	return T;
}

TABINT	sel_max_tabint(TABINT T, int fin)
{
	return ech_tabint(T, max_tabint(T, 0, fin), fin);
}

TABINT	tri_sel_tabint(TABINT T)
{
	for (int i = T.N - 1; i >= 0; i--)
		sel_max_tabint(T, i);
	return T;
}
