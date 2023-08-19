#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;
	int x = 1;
	int i, swap;

	printf("%d", n);
	for (i = 1; i <= 50; i++)
	{
	swap = x;
	x = n;
	n = swap + x;
	printf("%d ,", n);
	}
return (0);
}
