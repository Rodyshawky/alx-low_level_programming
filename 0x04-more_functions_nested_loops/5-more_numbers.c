#include"main.h"

/**
 * more_numbers - print numbers from 0 to 18 ten times
 *
 * Return: not return any value.
 */

void more_numbers(void)
{
int i, num;
for (i = 0; i < 10; i++)
{
for (num = 0; num < 15; num++)
{
	if (num > 9)
	{
		_putchar(1 + 48);
		num = num % 10;
	}
	_putchar(num + 48);
}
_putchar('\n');
}
}
