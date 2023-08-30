#include<stdio.h>
#include"main.h"

/**
 * check_sqrt- retur square root of n.
 * @n: input number
 * @num: number to check
 * Return: square root of number n
 */

int check_sqrt(int n, int num)
{
if (n * n == num)
return (n);
if (n * n > num)
return (-1);
return (check_sqrt(n + 1, num));
}

/**
 * _sqrt_recursion- get the sqrt of n
 * @n: input number
 * Return: sqrt of n.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (check_sqrt(1, n));
}
