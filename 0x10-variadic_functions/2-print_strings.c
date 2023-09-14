#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i ;
	char *s, *p;

	if (separator == NULL || *separator == 0)
		s = "";
	else 
		s = (char *) separator;
	va_start(ls, n);
	if (n > 0)
		printf("%s", va_arg(ls, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(ls, char*);
		if (p == NULL)
			p = "(nil)";
		else
			printf("%s%s", s, p);
	}
	printf("\n");
	va_end(ls);
}
