#include<stdio.h>
#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input pointer string
 * @accept: input pointer string
 * Return: number if success 0 if not.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; s[i] != accept[j] ; j++)
	{
		if (accept[j] == '\0')
			return (i);
	}
}
return (0);
}
