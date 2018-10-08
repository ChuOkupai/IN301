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

void	gen_croissant_tabint(TABINT T, int K)
{
	if (! T.T)
		return;
	int	min;
	
	min = 0;
	K = K / T.N;
	for (int i = 0; i < T.N; i++)
	{
		T.T[i] = min + rand() % K;
		min += K;
	}
}

void	gen_decroissant_tabint(TABINT T, int K)
{
	if (! T.T)
		return;
	int	min;
	
	min = K - K / T.N;
	K = K - min;
	for (int i = 0; i < T.N; i++)
	{
		T.T[i] = min + rand() % K;
		min -= K;
	}
}

void	sup_tabint(TABINT T)
{
	free(T.T);
	T.T = NULL;
	T.N = 0;
}

void	aff_tabint(TABINT T)
{
	for (int i = 0; i < T.N; i++)
	{
		printf("%d", T.T[i]);
		if (i + 1 < T.N)
			printf(" ");
	}
	printf("\n");
}

int	ech_tabint(TABINT T, int i)
{
	comparaisons++;
	if (T.T[i] <= T.T[i + 1])
		return (0);
	int	tmp;
	
	tmp = T.T[i];
	T.T[i] = T.T[i + 1];
	T.T[i + 1] = tmp;
	echanges++;
	return (1);
}

int	scan_ech_tabint(TABINT T, int fin)
{
	int	ech;
	
	ech = 0;
	for (int i = 0; i < fin - 1; i++)
		ech = ech_tabint(T, i) || ech;
	return (ech);
}

void	tri_bulle_tabint(TABINT T)
{
	for (int i = T.N; i > 0; i--)
		if (! scan_ech_tabint(T, i))
			return;
}

void	print_comp_ech()
{
	printf("comparaisons = %d\n", comparaisons);
	printf("echanges = %d\n", echanges);
}

void	reset_comp_ech()
{
	comparaisons = 0;
	echanges = 0;
}

STAT stat_moy(int N, int A)
{
	STAT S;
	
	S.nb_moy_comp = N;
	S.nb_moy_ech = A;
	return (S);
}
