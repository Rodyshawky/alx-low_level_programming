#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - prints reverse string
 * @s: input pointer
 * Return: On success 0.
 */

void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
