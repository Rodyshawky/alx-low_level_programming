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

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
		while ((n / 10) > 0)
		{
			_putchar(n % 10 + 48);
			n = n / 10;
		}
}
