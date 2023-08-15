#include<stdio.h>
#include"main.h"

/**
 * _abs -absluote value of number
 * @n: input number of _abs function
 * Return: On success 0.
 */

int _abs(int n)
{
int n;
if (n < 0)
n = n * (-1);
return (n);
else if (n > 0)
return (n);
else
return (0);
}
