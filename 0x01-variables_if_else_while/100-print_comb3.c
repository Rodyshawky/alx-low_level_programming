#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;

for (j = 0; j < 9 ; j++)
{
for (i = 0; i < 10 ; i++)
{
	if (j != i && i == 0)
		continue;
	if ( i == j)
                continue;
	putchar(j + 48);
	putchar(i + 48);
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
