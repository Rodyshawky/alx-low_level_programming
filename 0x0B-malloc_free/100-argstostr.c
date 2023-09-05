#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - convert arguments on command line to strings
 * @ac: input number
 * @av: input string
 * Return: string , NULL if not
 */

char *argstostr(int ac, char **av)
{
char *s;
int i, j;

s = (char *) malloc(ac * sizeof(char));
for (i = 0; i < ac; i++)
	for (j = 0; j < ac; j++)
	s[i] = av[i][j];
return (s);
}
