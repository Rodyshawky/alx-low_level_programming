#include"main.h"
#include<stdio.h>

/**
 * puts_half - prints s half of a string
 * @str: input pointer.
 * Return: On success 0.
 */

void puts_half(char *str)
{
int i, j;

while (str[i] != '\0')
{
	i++;
}
for (j = i / 2; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
