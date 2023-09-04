#include "main.h"
#include <stdlib.h>

/**
 * _strdup - get a pointer of string given as parameter
 *
 * @str: input string
 *
 * Return: pointer string ,NULL if not
 */

char *_strdup(char *str)
{
char *s;
int size = 0;
int i;

if (str == NULL)
{
	return (NULL);
}
for (i = 0; *str != '\0'; i++)
{
size++;
}
s = (char *) malloc(size *sizeof(char));
if (s == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size + 1; i++)
	s[i] = str[i];
return (s);
}
}
