#include<stdio.h>
#include"main.h"

/**
 * _strncat - concatenates two strings by n.
 * @dest: input pointer
 * @src: input string
 * @n: input number
 * Return: pointer of array
 */

char *_strncat(char *dest, char *src, int n)
{
int destlen = 0;
int srclen = 0;
int i;

for (i = 0; dest[i] != '\0'; i++)
{
destlen++;
}
for (i = 0; src[i] != '\0'; i++)
{
srclen++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[destlen + i] = src[i];
}
return (dest);
}
