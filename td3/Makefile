CC=gcc
CFLAGS=-O3 -Wall -Wextra -Werror

clean:
	rm -f *.out

v%: ex%.c
	vim $^

test: ex18.out
	./$^ foo foo
	./$^ bar rab
	./$^ fooinsidebar inside

r%: ex%.out
	./$^

ex%.out: ex%.c
	$(CC) $(CFLAGS) -o $@ $^
