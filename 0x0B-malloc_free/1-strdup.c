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
s = (char *) malloc(size *sizeof(char));
if (size  <= 0)
	free(s);
        return (NULL);
for (i = 0; i < size; i++)
	s[i] = str[i];
return (s);
}
