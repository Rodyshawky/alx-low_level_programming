#include"main.h"
/**
 * rev_string - prints a string in reverse
 * @s: input pointer
 * Return: On success 0.
 */

void rev_string(char *s);
{
int i = 0;
int j = 0;
char *r;

while (s[i] != '\0')
{
i++;
}
while (i > 0)
{
--i;
r[j] = s[i];
j++;
}
}
