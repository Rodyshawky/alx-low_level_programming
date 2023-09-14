#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: comma space
 * @n: elements number
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", va_arg(ls, int));
		}
		else
		{
			printf("%d ", va_arg(ls, int));
		}
	}
	printf("\n");
	va_end(ls);
}
