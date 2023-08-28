#include<stdio.h>
#include"main.h"

/**
 * _memcpy -copies memory area
 * @dest: pointer input
 * @src: pointer input
 * @n: input number
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n && n > 0; i++)
{
dest[i] = src[i];
}
return (dest);
}
