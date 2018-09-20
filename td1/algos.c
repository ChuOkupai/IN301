#include "constantes.h"

int T[N];

void lecture()
{
	FILE *f = NULL;
	
	f = fopen(NOMFIC, "r");
	if (! f)
		return;
	for (int i = 0; i < N; i++)
		if (fscanf(f, "%d", &T[i]) == EOF)
			T[i] = 0;
	fclose(f);
}

int recherche(int x)
{
	int c, i;
	
	for (c = 0, i = 0; i < N; i++)
	{
		c++;
		if (T[i] == x)
			break;
	}
	printf("comparaisons = %d\n", c);
	return (i < N) ? 1 : 0;
}

int stat_recherche(int x)
{
	int c, i;
	
	for (c = 0, i = 0; i < N; i++)
	{
		c++;
		if (T[i] == x)
			break;
	}
	return c;
}

int main()
{
	int c, i;
	
	srand(getpid());
	lecture();
	for (c = 0, i = 0; i < N; i++)
		c = stat_recherche(rand() % MAX);
	printf("Moyenne comparaisons = %d\n", c / i);
	return 0;
}
