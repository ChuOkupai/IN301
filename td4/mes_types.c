#include "mes_types.h"

unsigned int	comparaisons = 0;
unsigned int	echanges	 = 0;

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
	return (T);
}

TABINT	gen_croissant_tabint(TABINT T, int K)
{
	int	min;
	
	min = 0;
	K = K / T.N;
	for (int i = 0; i < T.N; i++)
	{
		T.T[i] = min + rand() % K;
		min += K;
	}
	return (T);
}

TABINT	gen_decroissant_tabint(TABINT T, int K)
{
	int	min;
	
	min = K - K / T.N;
	K = K - min;
	for (int i = 0; i < T.N; i++)
	{
		T.T[i] = min + rand() % K;
		min -= K;
	}
	return (T);
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
			printf(", ");
	}
	printf(".\n");
}

TABINT	ech_tabint(TABINT T, int i)
{
	if (i >= T.N - 1)
		exit(2);
	comparaisons++;
	if (T.T[i] <= T.T[i + 1])
		return (T);
	int	tmp;
	
	tmp = T.T[i];
	T.T[i] = T.T[i + 1];
	T.T[i + 1] = tmp;
	echanges++;
	return (T);
}

TABINT	scan_ech_tabint(TABINT T, int fin)
{
	for (int i = 0; i < fin - 1; i++)
		T = ech_tabint(T, i);
	return (T);
}

TABINT	tri_bulle_tabint(TABINT T)
{
	for (int i = 0; i < T.N - 1; i++)
		T = scan_ech_tabint(T, T.N - i);
	return (T);
}

void	print_comp()
{
	printf("comparaisons = %d\n", comparaisons);
}

void	print_ech()
{
	printf("echanges = %d\n", echanges);
}

void	print_stats()
{
	print_comp();
	print_ech();
}

void	reset_stats()
{
	comparaisons = 0;
	echanges = 0;
}
