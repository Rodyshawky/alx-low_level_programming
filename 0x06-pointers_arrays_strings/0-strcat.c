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
int i, len;

for (i = 0; dest[i] != '\0'; i++)
{
len++;
}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[len] = src[i];
		len++;
	}
dest[len] = '\0';
return (dest);
}
