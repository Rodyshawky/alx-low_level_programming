#include"main.h"
/**
 * rev_string - prints a string in reverse
 * @s: input pointer
 * Return: On success 0.
 */

void rev_string(char *s)
{
int i = 0;
int j = 0;
int swap;

while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i / 2; j++)
{
swap = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = swap;
}
}
