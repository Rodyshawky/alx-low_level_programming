#include"main.h"

/**
 * print_number - print number n
 *
 * @n: input number
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{

	if (n == 0)
		_putchar(48);
	else
	{
		while (n >= 1)
		{
			_putchar(n % 10 + 48);
			n = n / 10;
		}
	}
}
