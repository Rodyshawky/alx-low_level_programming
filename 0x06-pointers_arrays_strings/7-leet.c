#include"main.h"

/**
 * leet -encodes 1337
 * @a: input pointer
 * Return: always 0 if succes
 */

char *leet(char *a)
{
int i, j;
char s1[] = "AaEeOoTtLl";
char s2[] = "4433007711";

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (a[i] == s1[j])
a[i] = s2[j];
}
}
return (a);
}
