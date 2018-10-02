#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	N;
int	*T;

int	nb_entiers(char *nom)
{
	FILE	*f = NULL;
	int		buf, n;
	
	f = fopen(nom, "r");
	if (! f)
		return -1;
	buf = 0;
	n = 0;
	while (fscanf(f, "%d", &buf) != EOF)
		n++;
	fclose(f);
	return n;
}

int main()
{
	
	return 0;
}
