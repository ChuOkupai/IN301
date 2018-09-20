CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

all: clean ex07 ex08-09 ex10

ex07: genere
	./genere

genere: genere.c constantes.h
	$(CC) $(CFLAGS) -o $@ $@.c

ex08-09: algos
	./algos

algos: algos.c constantes.h
	$(CC) $(CFLAGS) -o $@ $@.c

ex10: wc-c
	./a.out nombres.data

wc-c: wc-c.c constantes.h
	$(CC) $(CFLAGS) $@.c

clean:
	rm -f genere algos a.out nombres.data
