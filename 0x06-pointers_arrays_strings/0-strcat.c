#include<stdio.h>
#include"main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: input pointer
 * @src: input string
 * Return: pointer of dest
 */

char *_strcat(char *dest, char *src)
{
int i, len, j;

for (i = 0; dest[i] != '\0'; i++)
{
len++;
}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[len] = src[j];
		len++;
	}
dest[len] = '\0';
return (dest);
}
