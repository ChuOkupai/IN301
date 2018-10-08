CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror
LDFLAGS=libmes_types.a

clean:
	rm -f *.o *.a *.out

run: ex19.out
	./$^

ex19.out: libmes_types.a ex19.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

libmes_types.a: mes_types.o
	ar rcs $@ $^

mes_types.o: mes_types.c
	$(CC) -c $(CFLAGS) -o $@ $^
