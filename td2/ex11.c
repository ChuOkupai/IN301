#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	printf("type		sizeof\n");
	printf("char		%ld\n", sizeof(char));
	printf("int		%ld\n", sizeof(int));
	printf("double		%ld\n", sizeof(double));
	printf("char*		%ld\n", sizeof(char*));
	printf("void*		%ld\n", sizeof(void*));
	printf("int*		%ld\n", sizeof(int*));
	printf("double*		%ld\n", sizeof(double*));
	printf("int**		%ld\n", sizeof(int**));
	printf("int[10]		%ld\n", sizeof(int[10]));
	printf("char[7][3]	%ld\n", sizeof(char[7][3]));
	//printf("int[]		%ld\n", sizeof(int[]));
	return 0;
}
