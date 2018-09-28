#include <stdio.h>

void	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 42;
	swap(&a, &b);
	printf("%d, %d\n", a, b);
	return 0;
}
