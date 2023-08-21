#include"main.h"

/**
 * _strlen -get the length of a string.
 * @s: input pointer
 * Return: return the length of a string..
 */

int _strlen(char *s)
{
int i;

while (*s != '\0')
{
i++;
}
return (i);
}
