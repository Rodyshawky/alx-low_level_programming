#include<stdio.h>
#include"main.h"

/**
 * print_to_98 - print from n to 98 numbers
 * @n: input number of print_to_98 function
 * Return: no retun value.
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = 98 ; i <= n ; i++)
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
else if (n < 98)
{
for (i = n ; i <= 98 ; i++)
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
}
