#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h>
/**
 * main - adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
int sum = 0;
char *c;

if (argc < 2)
printf("0\n");
while (--argc)
{
	for (c = argv[argc]; *c; c++)
	{
		if (*c < '0' || *c > '9')
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[argc]);
	}
}
printf("%d\n", sum);
return (0);
}
