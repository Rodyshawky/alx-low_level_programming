#include"main.h"
#include<stdio.h>

/**
 *_strcpy- copy src to dest
 * @src: input pointer.
 * @dest: input pointer
 * Return: On success 0.
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
