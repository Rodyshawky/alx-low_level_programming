#include<stdio.h>
#include"main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: input pointer string
 * @b: input char
 * @n: input number
 * Return: pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0 && i < n && *s != '\0'; i++)
{
s[i] = b;
}
return (s);
}
