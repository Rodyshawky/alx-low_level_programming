#include"main.h"
#include<stdio.h>

/**
 * puts_half - prints s half of a string
 * @str: input pointer.
 * Return: On success 0.
 */

void puts_half(char *str)
{
int len, i;

for (i = 0; str[i] != '\0'; i++)
{
len++;
}
	for (i /0= (len / 2); str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
_putchar('\n');
}
