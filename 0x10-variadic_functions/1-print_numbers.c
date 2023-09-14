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
	char *s;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(ls, n);
		if (n > 0)
		{
			printf("%d", va_arg(ls, int));
		}
		for (i = 1; i < n; i++)
		{
			printf("%s %d", s, va_arg(ls, int));
		}
	printf("\n");
	va_end(ls);
}
