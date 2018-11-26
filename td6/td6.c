#include "td6.h"

int estValide(char *s)
{
	int nfloat, p1, p2;

	nfloat = 0;
	p1 = 0;
	p2 = 0;
	for (int i = 0; s[i]; i++)
	{
		if (isspace(s[i]))
			return 0;
		else if (s[i] == '(')
			p1++;
		else if (s[i] == ')')
			p2++;
		else if (s[i] == '.')
		{
			if (! i)
				return 0;
			else if (isdigit(s[i - 1]) && isdigit(s[i + 1]))
				nfloat++;
			else
				return 0;
		}
	}
	return (nfloat && p1 == p2) ? 1 : 0;
}

int	parentheseFermante(char *s)
{
	if (s[0] != '(')
		return -1;
	int indice, niveau;

	indice = 1;
	niveau = 0;
	while (s[indice] != ')' || niveau)
	{
		if (s[indice] == '\0')
			return -1;
		else if (s[indice] == '(')
			niveau++;
		else if (s[indice] == ')')
			niveau--;
		indice++;
	 }
	return indice;
}

int	op_char_to_int(char c)
{
	if (c == '+') return OP_ADD;
	if (c == '-') return OP_SOUS;
	if (c == '*') return OP_MULT;
	if (c == '/') return OP_DIV;
	return -1;
}

EA*	_strtoEA(char *s);

EA*	creerNoeud(char *sg, char op, char *sd)
{
	EA *E;

	E = malloc(sizeof(EA));
	if (! E)
		return E;
	E->opChar = op;
	E->op = op_char_to_int(op);
	E->val = 0.0;
	E->g = _strtoEA(sg);
	E->d = _strtoEA(sd);
	return E;
}

EA*	creerFeuille(char *s)
{
	EA *E;

	E = NULL;
	E = malloc(sizeof(EA));
	if (! E)
		return E;
	E->opChar = 0;
	E->op = 0;
	E->val = atof(s);
	E->g = E->d = NULL;
	return E;
}

EA*	_strtoEA(char *s)
{
	if (s[0] != '(')
		return creerFeuille(s);
	int		indice;
	char	*sg, *sd, op;

	indice = parentheseFermante(s);
	s[indice] = '\0';
	sg = s + 1;
	op = s[indice + 1];
	sd = s + indice + 2;
	indice = parentheseFermante(sd);
	sd[indice] = '\0';
	sd = sd + 1;
	return creerNoeud(sg, op, sd);
}

EA*	strtoEA(char *s)
{
	if (estValide(s))
		return _strtoEA(s);
	else
		return NULL;
}

float	evaluerEA(EA *E)
{
	if (! E)
		return 0;
	if (! E->op)
		return E->val;
	float vg, vd;

	vg = evaluerEA(E->g);
	vd = evaluerEA(E->d);
	switch (E->op)
	{
		case OP_ADD:	return vg + vd;
		case OP_SOUS:	return vg - vd;
		case OP_MULT:	return vg * vd;
		case OP_DIV:	return vg / vd;
		default:		return 0;
	}
	return 0;
}

void	afficherEA(EA *E, int profondeur)
{
	if (! E)
		return;
	for (int i = 0; i < profondeur; i++)
		printf("  ");
	if (E->op)
	{
		printf("%c\n", E->opChar);
		afficherEA(E->g, profondeur + 1);
		afficherEA(E->d, profondeur + 1);
	}
	else
		printf("%f\n", E->val);
}

void	destroyEA(EA *E)
{
	if (! E)
		return;
	if (E->g)
		destroyEA(E->g);
	if (E->d)
		destroyEA(E->d);
	free(E);
}