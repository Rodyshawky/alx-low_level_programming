#include"main.h"

/**
 * puts_half - prints s half of a string
 * @str: input pointer.
 * Return: On success 0.
 */

void puts_half(char *str)
{
int i = 0, len;

while (str[i] != '\0')
{
	i++;
}
if (i % 2 == 1)
	len = i - 1 / 2;
	len += 1;
else
	len = i / 2;
for (; len < i; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
