#include<stdio.h>
#include"main.h"

/**
 * factorial - get factorial of n.
 * @n: input number
 * Return: factorial of n.
 */
int factorial(int n)
{
int fact = 1;

if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
fact = n * factorial(n - 1);
return (fact);
}
