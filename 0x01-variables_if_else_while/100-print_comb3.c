#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 0; i < 10 ; i++)
{
/*	for (j = 0; i < 10 ; j++)
	{*/
		putchar(48);
		putchar(i + 48);
		putchar(',');
		putchar(' ');
//	}//
}
putchar('\n');
return (0);
}
