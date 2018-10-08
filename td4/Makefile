CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

run: ex19-20.out
	./$^

ex19-20.out: mes_types.h mes_types.c ex19-20.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *.a *.out
