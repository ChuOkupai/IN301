#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int*	newtab(int size)
{
	int	*t;
	
	t = malloc(sizeof(int) * size);
	if (t)
		for (int i = 0; i < size; i++)
			t[i] = rand() % 20;
	return t;
}

int*	newsortedtab(int size)
{
	int	*t;
	
	t = malloc(sizeof(int) * size);
	if (t)
	{
		t[0] = rand() % 10;
		for (int i = 1; i < size; i++)
			t[i] = t[i - 1] + 10;
	}
	return t;
}

void	printtab(int *t, int size)
{
	size--;
	for (int i = 0; i < size; i++)
		printf("%d, ", t[i]);
	printf("%d\n", t[size]);
}

long unsigned int	multtab(int *t, int size)
{
	if (size < 1)
		return 0;
	long unsigned int n;

	size--;
	n = t[size];
	while (size > 1)
	{
		n *= t[size - 1];
		size--;
	}
	return n;
}

int	mintab(int *t, int size)
{
	if (size < 1)
		return 0;
	int min;

	size--;
	min = t[size--];
	while (size > 0)
	{
		if (min > t[size])
			min = t[size];
		size--;
	}
	return min;
}

void	rshifttab(int *t, int size)
{
	if (size < 2)
		return;
	size--;
	while (size > 0)
	{
		t[size] = t[size - 1];
		size--;
	}
}

void	inserttab(int n, int *t, int size)
{
	if (size < 1)
		return;
	int i;

	i = 0;
	size--;
	while (i < size && t[i] < n)
		i++;
	while (size > i)
	{
		t[size] = t[size - 1];
		size--;
	}
	t[i] = n;
}

void	reversetab(int *t, int size)
{
	if (size < 2)
		return;
	int	i;
	int	j;
	int k;

	i = 0;
	j = size - 1;
	if (! size % 2)
		size--;
	size /= 2;
	while (i < size)
	{
		k = t[i];
		t[i] = t[j];
		t[j] = k;
		i++;
		j--;
	}
}

void	removetab(int *t, int size)
{
	if (size < 2)
		return;
	int i;

	i = rand() % size;
	size--;
	while (i < size)
	{
		t[i] = t[i + 1];
		i++;
	}
}

int main()
{
	int	n;
	int	*t;

	srand(getpid());
	n = 10;
	t = newtab(n);
	if (! t)
		return 1;
	printtab(t, n);
	printf("multtab = %ld\n", multtab(t, n));
	printf("mintab = %d\n", mintab(t, n));
	rshifttab(t, n);
	printf("rshift: ");
	printtab(t, n);
	free(t);
	t = newsortedtab(n);
	if (! t)
		return 2;
	printf("newsortedtab: ");
	printtab(t, n);
	inserttab(42, t, n);
	printf("inserttab: ");
	printtab(t, n);
	reversetab(t, n);
	printf("reversetab: ");
	printtab(t, n);
	removetab(t, n);
	printf("removetab: ");
	printtab(t, n);
	free(t);
	return 0;
}
