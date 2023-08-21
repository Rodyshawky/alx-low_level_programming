#include"main.h"

/**
 * _puts - prints a string
 * @str: input pointer
 * Return: On success 0.
 */

void _puts(char *str)
{
int len = 0;
int i;

for (; *str != '\0'; str++)
{
len++;
}
for (i = 0; i < len; i++)
	_putchar(str[i] + 48);
}
