#include"main.h"
/**
 * print_rev - prints a string in reverse
 * @s: input pointer
 * Return: On success 0.
 */

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
	i++;
while (i >= 0)
{
putchar(s[i] + 0);
i--;
}
_putchar('\n');
}
