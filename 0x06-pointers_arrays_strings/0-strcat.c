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
int i, len, size;
int n = 0;

while (*dest != '\0')
len++;
while (*src != '\0')
size++;
	for (i = len - 1; i < len + size; i++)
	{
		dest[i] == src[n];
		n++;
	}
	dest[len + size] = '\0';
}
