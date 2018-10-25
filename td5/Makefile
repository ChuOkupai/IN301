CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

run: main.out
	./$<

main.out: main.c ex23.o ex24.o ex25.o ex26.o ex27.o
	$(CC) $(CFLAGS) -o $@ $^

ex%.o: ex%.c td5.h
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f *.o *.out
