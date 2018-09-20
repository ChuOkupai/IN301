#include "constantes.h"

int main(int argc, char **argv)
{
	if (argc < 2)
		return 1;
	FILE *f = NULL;
	int c, n = 0;
	
	f = fopen(argv[1], "r");
	if (! f)
	{
		printf("wc: %s: No such file or directory\n", argv[1]);
		return 2;
	}
	c = fgetc(f);
	while (c != EOF)
	{
		n++;
		c = fgetc(f);
	}
	fclose(f);
	printf("%d %s\n", n, argv[1]);
	return 0;
}
