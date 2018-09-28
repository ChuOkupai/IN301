CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

clean:
	rm -f *.out

v%: ex%.c
	vim $^

r%: ex%.out
	./$^

ex%.out: ex%.c
	$(CC) $(CFLAGS) -o $@ $^
