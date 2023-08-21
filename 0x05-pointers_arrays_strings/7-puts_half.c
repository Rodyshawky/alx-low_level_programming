#include"main.h"
#include<stdio.h>

/**
 * puts_half - prints s half of a string
 * @str: input pointer.
 * Return: On success 0.
 */

void puts_half(char *str)
{
int i, j, k;
int len;

for (i = 0; str[i] != '\0'; i++)
{
len++;
}
if (len % 2 == 1)
{
	for (i = (len - 1) / 2; i < len; i++)
		printf("%c", str[i]);
}
else
{
	for (k = len / 2; k < len; k++)
	{
	printf("%c", str[k]);
	}
}
printf("\n");
}
