#include<stdio.h>
#include"main.h"

/**
 * _strncpy - copy string
 * @dest: input pointer
 * @src: input string
 * @n: input number
 * Return: pointer of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
dest [n + 1] = '\0';
return (dest);
}
