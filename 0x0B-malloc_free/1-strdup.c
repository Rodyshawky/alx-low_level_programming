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
int len = 0;
int i;

if (str == NULL)
	return (NULL);
while (*str != '\0')
{
len++;
}
s = (char *) malloc (len * sizeof(char));
if (s == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < len; i++)
	s[i] = str[i];
return (s);
}
}
