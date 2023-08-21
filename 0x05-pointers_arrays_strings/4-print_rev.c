#include"main.h"
/**
 * print_rev - prints a string in reverse
 * @s: input pointer
 * Return: On success 0.
 */

void print_rev(char *s)
{
int j;
int i = 0;
int len;

for (; *s != '\0'; s++)
	len++;
char arr[len];
for (; *s != '\0'; i++)
{
arr[i] = *s;
s++;
}
for (j = len; j >= 0; j++)
	_putchar(arr[j] + 0);
_putchar('\n');
}

