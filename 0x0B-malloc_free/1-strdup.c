#include "main.h"
#include <stdlib.h>
#include <string.h>
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
size = strlen(str);
if (size <= 0)
{
	return (NULL);
}
else
{
s = (char *) malloc(size + 1 *sizeof(char));
for (i = 0; i < size + 1; i++)
	s[i] = str[i];
return (s);
}
}
