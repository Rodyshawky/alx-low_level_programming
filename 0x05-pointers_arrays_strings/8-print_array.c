#include"main.h"
#include<stdio.h>

/**
 * print_array - prints array of integers
 * @a: input pointer.
 * @n: input number
 * Return: On success 0.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n-1; i++)
{
	printf("%d, ", a[i]);
}
printf("%d\n",a[i]);
}
