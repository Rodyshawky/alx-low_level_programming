#include"main.h"

/**
 * print_numbers -prints the numbers from 0 to 9
 * Return: On success 0.
 */

void print_numbers(void)
{
int n = 0;

while (n >= 0 && n <= 9)
{
if (n != 2 || n != 4)
_putchar(n + 48);
n++;
}
_putchar('\n');
}
