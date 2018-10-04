#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	float	sum;
	int		i;
	
	sum = 0;
	printf("argc = %d\n", argc);
	for (i = 1; i < argc; i++)
		sum += atof(argv[i]);
	printf("%.1f\n", sum);
	return (0);
}
