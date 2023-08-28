#include<stdio.h>
#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input pointer string
 * @accept: input pointer string
 * Return: pointer s.
 */

unsigned int _strspn(char *s, char *accept)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == *accept)
return (i + 1);
}
return (0);
}
