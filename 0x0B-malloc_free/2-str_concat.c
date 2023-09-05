#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: input string
 * @s2: input string
 *
 * Return: pointer string of concatinate ,NULL if not
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int size1 = 0;
int size2 = 0;
int i, j, len;

if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';
size1 = strlen(s1);
size2 = strlen(s2);
len = size1 + size2 + 1;
s = (char *) malloc(len *sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < size1 ; i++)
{
	s[i] = s1[i];
}
for (j = 0; j < size2 && i < len; j++)
{
	s[i] = s2[j];
	i++;
}
s[i] = '\0';
return (s);
}
