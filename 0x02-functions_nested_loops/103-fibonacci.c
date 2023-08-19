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
int  sum = 0;

for (i = 1; i <= 32; i++)
{
swap = x;
x = n;
n = swap + x;
if (n % 2 == 0)
{
sum = sum + n;
}
}
printf("%d \n", sum);
return (0);
}
