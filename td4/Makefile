CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

clean:
	rm -f *.o *.a *.out

ex19: ex19.out
	./ex19.out

%.out: libmes_types.a %.c
	$(CC) $(CFLAGS) -o $@ $^ -L. -lmes_types

libmes_types.a: mes_types.o
	ar rcs $@ $^

mes_types.o: mes_types.c
	$(CC) -c $(CFLAGS) -o $@ $^
