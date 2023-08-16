#include "main.h"
#include<stdio.h>

int postitive_or_negative(int n)
{
if (n > 0)
{
printf("%d,is positive\n", n);
return (1);
}
else if (n < 0)
{
printf("%d,is negative\n", n);
return (-1);
}
else
{
printf("%d,is zero\n", n);
return (0);
}
}
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;

i = 0;
positive_or_negative(i);
return (0);
}
