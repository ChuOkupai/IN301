CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

all: clean 07 08-09 10

07: genere
	./genere

genere: genere.c constantes.h
	$(CC) $(CFLAGS) -o genere genere.c

08-09: algos
	./algos

algos: algos.c constantes.h
	$(CC) $(CFLAGS) -o algos algos.c

10: wc-c
	./a.out nombres.data

wc-c: wc-c.c
	$(CC) $(CFLAGS) wc-c.c

clean:
	rm -f genere algos a.out nombres.data
