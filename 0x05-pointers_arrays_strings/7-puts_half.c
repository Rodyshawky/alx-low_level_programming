#include"main.h"
#include<stdio.h>

/**
 * puts_half - prints s half of a string
 * @str: input pointer.
 * Return: On success 0.
 */

void puts_half(char *str)
{
int i;
int len;

while (*str != '\0')
{
len++;
}
for (i = len / 2; i < len; i++)
{
printf("%d", str[i]);
}
printf("\n");
}
