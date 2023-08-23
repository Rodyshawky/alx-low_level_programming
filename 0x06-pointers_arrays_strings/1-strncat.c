#include<stdio.h>
#include"main.h"

/**
 * _strcat - concatenates two strings by n.
 * @dest: input pointer
 * @src: input string
 * @n: input number
 * Return: pointer of dest
 */

char *_strncat(char *dest, char *src, int n)
{
int destlen = 0;
int srclen = 0;
int i;
int d = sizeof(dest);
int s = sizeof (src);
for (i = 0; dest[i] != '\0'; i++)
destlen++;
for (i = 0; src[i] != '\0'; i++)
srclen++;
for (i = 0; s > 0; i++)
dest[destlen + i] = src[i];
return (dest);
}
