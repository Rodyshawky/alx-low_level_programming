#include"main.h"
#include<stdio.h>

/**
 * puts_half - prints s half of a string
 * @str: input pointer.
 * Return: On success 0.
 */

void puts_half(char *str)
{
int len, i, k;

for (i = 0; str[i] != '\0'; i++)
{
len++;
}
	for (k = len / 2; k < len; k++)
	{
	printf("%c", str[k]);
	}
printf("\n");
}
