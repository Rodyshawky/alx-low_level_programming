#include"main.h"


/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: input pointer
 * @size: input number
 * Return: On success 0.
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
sum2 += a[size - i - 1];
a += size;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
