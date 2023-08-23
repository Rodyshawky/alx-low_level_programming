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
int len = 0;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i]; 
len++;
}
while (len < n)
{
dest[len] = '\0';
len++;
}
return (dest);
}
