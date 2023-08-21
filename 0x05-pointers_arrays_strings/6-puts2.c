#include"main.h"
/**
 * puts2 - prints every other character of a string
 * @str: input pointer
 * Return: On success 0.
 */

void puts2(char *str)
{
int i;

for (i = 0; *str != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
