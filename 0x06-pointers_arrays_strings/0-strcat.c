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

while (*dest != '\0')
len++;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[len] = src[i];
		len++;
	}
return (dest);
}
