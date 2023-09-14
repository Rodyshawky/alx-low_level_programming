#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum of all elements
 * @n: number of variables
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ls, n);
	for (i = 0 ; i < n; i++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);
	return (sum);
}
