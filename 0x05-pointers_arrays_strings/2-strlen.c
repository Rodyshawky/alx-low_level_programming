#include"main.h"

/**
 * _strlen -get the length of a string.
 * @s: input pointer
 * Return: return the length of a string..
 */

int _strlen(char *s)
{
int i = 0;

for (; *s != '\0'; s++)
{
i++;
}
return (i + 1);
}
