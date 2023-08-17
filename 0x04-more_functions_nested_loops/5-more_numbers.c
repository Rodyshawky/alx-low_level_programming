#include"main.h"

/**
 * more_numbers - print numbers from 0 to 18 ten times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int i, num;

for (i = 0; i < 10; i++)
{
for (num = 0; num < 15; num++)
{
	_putchar(num + 48);
}
}
_putchar('\n');
}
