#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input one, operator, input two = pointer res to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int (*res)(int, int);
	char *g_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	g_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*g_op == '/' || *g_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(g_op);
	z = res(x, y);

	printf("%d\n", z);
	return (0);
}
