#include"main.h"

/**
 * print_line - print line by number n
 *
 * @n: input number
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
int line;

	if (n <= 0)
		_putchar('\n');
	else

		for (line = 1; line <= n; line++)
			_putchar('_');
		_putchar('\n');

}
