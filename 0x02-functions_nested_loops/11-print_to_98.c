#include<stdio.h>
#include"main.h"

/**
 * print_to_98 - print from n to 98 numbers
 * @n: input number of print_to_98 function
 * Return: no retun value.
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n ; i >= 98 ; i--)
printf("%d, ", i);
}
else
{
for (i = n ; i <= 98 ; i++)
printf("%d, ", i);
}
}
