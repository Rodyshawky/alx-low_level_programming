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
int swap;
double sum = 0;

while (sum < 4000000)
{
swap = x;
x = n;
n = swap + x;
if (n % 2 == 0)
{
sum += n;
}
printf("%f", sum);
}
printf("\n");
return (0);
}
