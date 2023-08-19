#include<stdio.h>
#include"main.h"

/**
 * print_times_table - print n times table start from 0
 * @n: input number of function
 * Return: On success 0.
 */

void print_times_table(int n)
{
int i;

for (i = 0; i <= n; i++)
{
	if (n == 0 || n > 15)
        break;
	printf("0, ");
	printf("%d, ", i*2);
	if (n == 0 || n > 15)
	break;
	printf("\n");
}
}
