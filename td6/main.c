#include "td6.h"

int main(int argc, char **argv)
{
	if (argc < 2)
		return 1;
	EA	*E;

	for (int i = 1; i < argc; i++)
	{
		E = strtoEA(argv[i]);
		if (! E)
			exit(2);
		afficherEA(E, 0);
		printf("= %f\n", evaluerEA(E));
		destroyEA(E);
	}
	return 0;
}