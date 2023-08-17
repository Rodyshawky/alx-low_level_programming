#include"main.h"

/**
 * print_square - print a square using #
 *
 * @size: input function
 *
 * Return: Always 0 (sucsses)
 */

void print_square(int size)
{
int row, colunm;

	for (row = 1; row <= size ; row++)
	{
		for (colunm = 1; colunm <= size; colunm++)
			_putchar('#');
		_putchar('\n');
	}
}
