#include"main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 *
 * Return: always return 0 (sucess).
 */

void more_numbers(void)
{
int i, n, count;
for (i = 1; i < 10; i++)
{
for (count = 0; count < 15; count++)
{
	n = count;
	if (count > 9)
	{
		_putchar(1 + 48);
		n = count % 10;
	}
	_putchar(n + 48);
}
}
_putchar('\n');
}
