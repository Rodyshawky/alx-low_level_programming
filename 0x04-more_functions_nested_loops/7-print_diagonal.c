#include"main.h"

/**
 * print_diagonal - print / diagonal
 *
 *@n: input number
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int line, p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < n; line++)
		{
			for (p = 0; p <= line; p++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
        }
}
