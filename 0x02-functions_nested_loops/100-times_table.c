#include<stdio.h>
#include"main.h"

/**
 * print_times_table - print n times table start from 0
 * @n: input number of function
 * Return: On success 0.
 */

void print_times_table(int n)
{
int i, j;

for (i = 0; i < n ; i++)
{
	for (j = 0; j < n ; j++)
	{
	 printf("0, ");
	if (n <= 0 || n > 15)
        	break;
	printf("%d, ", i * j);
	}
	printf("\n");
}
printf("\n");
}