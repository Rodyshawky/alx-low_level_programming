#include<stdio.h>
#include"main.h"

/**
 * print_last_digit - print_last_digit value of number
 * @n: input number of print_last_digit  function
 * Return: On success 0.
 */

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = (-1) * n;
last_digit = n % 10;
return (last_digit);
}

