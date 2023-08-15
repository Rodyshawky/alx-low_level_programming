#include<stdio.h>
#include"main.h"

/**
 * print_sign- check the number  n is positive or negative or zero
 * @n: The number to check
 *
 * Return: On positive 1 ,negative 0, if zero -1.
 */

int print_sign(int n)
{
if (n > 0)
{
return(1);
_putchar('+');
}
else if (n < 0)
{
_putchar('-');
return (0);
}
else
{
_putchar('0');
return (-1);
}
}
