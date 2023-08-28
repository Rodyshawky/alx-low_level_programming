#include"main.h"


/**
 * _strstr - locates a substring
 * @haystack: input pointer
 * @needle: input pointer
 * Return: pointer string.
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
return (haystack);
}
if (needle[j] == '\0')
return (needle);
}
return (NULL);
}
