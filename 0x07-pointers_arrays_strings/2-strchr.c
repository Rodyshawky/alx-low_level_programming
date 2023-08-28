#include<stdio.h>
#include"main.h"

/**
 * _strchr - locates a character in a string
 * @s: input pointer string
 * @c: input char
 * Return: pointer s.
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
