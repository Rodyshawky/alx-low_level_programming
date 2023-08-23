#include"main.h"

/**
 * _strcmp -reverses the content of an array of integers
 * @a: input pointer
 * @n: input number
 * Return: 0 if success
 */

void reverse_array(int *a, int n)
{
int i = 0;
int swap;

for (i = 0; i < n / 2 ; i++)
{
swap = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = swap;
}
}
