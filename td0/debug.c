#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fonction factorielle
int factorielle(int x)
{
	if (x == 0)
		return 1;
	else return x * factorielle(x - 1);
}

//fonction somme
int somme(int x)
{
	int res = 0;
	int i = 0;
	while (i <= x)
	{
    	i++; /*incrementation */ 
    	res += i - 1; /* fin de boucle */
	}
	return res;
}

//fonction maximum
int maximum(int x, int y)
{
	return (x > y) ? x : y;
}

//fonction principale
int main()
{
	int a, b;

	srand(time(NULL));
	a = rand() % 8 + 2;
	b = factorielle(a);
	printf("\nFactorielle de %d vaut %d\n\n", a, b);

	a = rand() % 100;
	b = somme(a);
	printf("\nLa somme des entiers de 1 a %d vaut %d\n\n", a, b);
	
	a = rand() % 100;
	b = rand() % 100;
	printf("\nLe maximum entre %d et %d vaut %d\n\n", a, b, maximum(a,b));

	return 0;
}
