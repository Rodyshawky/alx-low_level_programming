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

int main(int argc, char **argv)
{
	int i, x, sum = 0;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		x = strtol(argv[i], &c, 10);
		if (*c)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += x;
		}
	}
	printf("%d\n", sum);

	return (0);
}
