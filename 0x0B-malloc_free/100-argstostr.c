#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - convert arguments on command line to strings
 * @ac: input number
 * @av: input string
 * Return: string , NULL if not
 */

char *argstostr(int ac, char **av)
{
char *s;
int size = 0;
int i, j;
int len = 0;

if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size += 1;
		}
		size += 1;
	}
	size += 1;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		s[len] = av[i][j];
		len++;
	}
	s[len] = '\n';
	len++;
}
return (s);
}
