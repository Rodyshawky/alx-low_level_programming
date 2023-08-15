#include<stdio.h>
#include"main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: no return value.
 */

void times_table(void)
{
int i, count, num;

for (i = 0; i <= 9 ; i++)
{
_putchar('0');
for (count = 1; count <= 9 ; count--)
{
	num = i * count;
        _putchar(',');
	_putchar(' ');
	if (num <= 9)
	_putchar(' ');
	else
	_putchar(( num / 10) + 48);
	printf((num % 10) + 48);
}
_putchar('\n');
}
}
