#include"main.h"

/**
 * _puts - prints a string
 * @str: input pointer
 * Return: On success 0.
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
	_putchar(*str + 48);
}
