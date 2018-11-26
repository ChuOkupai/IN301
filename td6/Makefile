CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

run: main.out
	./$< "((1.0)+(2.0))*(3.0)"

main.out: main.c td6.o
	$(CC) $(CFLAGS) -o $@ $^

td6.o: td6.c td6.h
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f *.o *.out
