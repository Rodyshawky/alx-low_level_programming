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
int i;
int sum = 0;

if (argc < 2)
printf("0\n");
for (i = 0; i < argc; i++)
{
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
