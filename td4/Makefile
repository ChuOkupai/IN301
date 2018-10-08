CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

run: ex19.out
	./$^

ex19.out: ex19.c libmes_types.a
	$(CC) $(CFLAGS) -o $@ $^

libmes_types.a: mes_types.o
	ar rcs $@ $^

mes_types.o: mes_types.c
	$(CC) -c $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *.a *.out
