#include"main.h"
#include<stdio.h>

/**
 * puts_half - prints s half of a string
 * @str: input pointer.
 * Return: On success 0.
 */

void puts_half(char *str)
{
int len, i, j, k;

for (i = 0; str[i] != '\0'; i++)
{
len++;
}
if (len % 2 == 1)
{
	for (j = (len - 1) / 2; j < len; j++)
		printf("%c", str[j]);
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
