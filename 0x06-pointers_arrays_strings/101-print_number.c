#include<stdio.h>
#include"main.h"

/**
 * print_number - print an integer
 * @n: input number
 *
 * Return: always 0 success
 */

void print_number(int n)
{
int num;

num = n;
if (n < 0)
{
_putchar('-');
num = -n;
}
if (num  / 10 != 0)
{
print_number(num / 10);
}
_putchar(num % 10 + 48);
}
