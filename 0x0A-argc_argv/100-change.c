#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the smallest  number of coin
 * @argc: count of command
 * @argv: array string of input
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *ptr;
	int cents[] = {25, 10, 5, 2};

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &ptr, 10);
	count = 0;

	if (*ptr != '\0')
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
