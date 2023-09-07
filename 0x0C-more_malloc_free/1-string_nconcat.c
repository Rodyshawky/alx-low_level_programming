#include "main.h"
#include<stdlib.h>

/**
*string_nconcat - Concatenates two strings 
*@s1: input string.
*@s2: input string.
*@n: input number
*
*Return: pointer to string else NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, len;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (*s1 != '\0')
	len++;
s = (char*) malloc(len + n *sizeof(char));
if (s == NULL)
	return (NULL);
for (i = 0; i < len; i++)
{
	s[i] = s1[i];
}
for (j = 0; j < n; j++)
{
	s[i] = s2[j];
	i++;
}
return (s);
}
