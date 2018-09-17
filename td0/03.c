#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	srand(getpid());
	for (int i = 0; i < 10000; i++)
		printf("%d\n", rand() % 1001);
	return 0;
}
