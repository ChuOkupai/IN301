#include "constantes.h"

void ecrire()
{
	FILE *f = NULL;
	
	f = fopen(NOMFIC, "w");
	if (! f)
		return;
	for (int i = 0; i < N; i++)
		fprintf(f, "%6d\n", rand() % MAX);
	fclose(f);
}

int main()
{
	srand(getpid());
	ecrire();
	return 0;
}
