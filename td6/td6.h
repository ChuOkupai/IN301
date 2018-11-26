#ifndef		_TD_6_H
# define	_TD_6_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define OP_ADD	1
#define OP_SOUS	2
#define OP_MULT	3
#define OP_DIV	4

typedef struct Expression_Arithmetique EA;

struct Expression_Arithmetique
{
	char	opChar;
	int		op;
	float	val;
	EA		*g;
	EA		*d;
};

EA*	strtoEA(char *s);

float	evaluerEA(EA *E);

void	afficherEA(EA *E, int profondeur);

void	destroyEA(EA *E);

#endif	/* _TD_6_H */
