#include<stdio.h>
#include"main.h"

/**
 * _sqrt__recursion - get sqrt of n
 * @n: input number
 * Return: sqrt of n.
 */

int check_base(int n, int base)
{
        if (n * n == base)
                return (n);
        if (n * n > base)
                return (-1);
        return (check_base(n + 1, base));
}

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (check_base(1, n));
}

