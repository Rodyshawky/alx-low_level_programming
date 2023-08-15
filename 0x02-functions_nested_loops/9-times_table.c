#include<stdio.h>
#include"main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: no return value.
 */

void times_table(void)
{
int i, count;

for (i = 0; i <= 9 ; i++)
{
for (count = 0; count <= 9 ; count++)
{
printf("%d,   ", i * count);
}
printf("\n");
}
}
