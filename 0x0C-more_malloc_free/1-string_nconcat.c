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
unsigned int i, j, len1, len2;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
	len1++;
}
for (i = 0; s2[i] != '\0'; i++)
{
        len2++;
}
if (n < len2)
{
s = malloc(len1 + n + 1);
}
for (i = 0; i < len1; i++)
{
	s[i] = s1[i];
}
for (j = 0; j < n; j++)
{
	s[i] = s2[j];
	i++;
}
s[i] = '\0';
return (s);
}
