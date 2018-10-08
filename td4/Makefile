CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

run: ex19-20.out
	./$^

ex19-20.out: ex19-20.c mes_types.h mes_types.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f *.o *.a *.out
