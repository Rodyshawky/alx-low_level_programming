#include"main.h"

/**
 * print_numbers -prints the numbers from 0 to 9
 * Return: On success 0.
 */

void print_numbers(void)
{
int n;

while (n >= 48 && n <= 57)
{
_putchar(n + 48);
n++;
}
_putchar('\n');
}
