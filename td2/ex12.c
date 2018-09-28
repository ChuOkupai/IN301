#include <stdio.h>

void plusun(int a, int *T)
{
	a++;
	T[0] = T[0]+1;
}

int	main(void)
{	
	int	a;
	int	T[10];

	a = 7;
	T[0] = 12;
	printf("a	T[0]\n");
	printf("%d	%d\n", a, T[0]);
	plusun(a, T);
	printf("%d	%d\n", a, T[0]);
	return 0;
}
