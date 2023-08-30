#include<stdio.h>
#include"main.h"

/**
 * _strlen_recursion - prints a string, followed by a new line
 * @s: input pointer
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
int len = 0;

if (*s != '\0')
{
len += _strlen_recursion(s + 1) + 1;
}
return len;
}
