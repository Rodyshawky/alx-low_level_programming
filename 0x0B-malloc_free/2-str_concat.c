#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: input string
 * @s2: input string
 *
 * Return: pointer string of concatinate ,NULL if not
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int size1 = 0;
int size2 = 0;
int i, len ;

if (s1 == NULL && s2 == NULL)
{
        return (NULL);
}
size1 = strlen(s1);
size2 = strlen(s2);
len = size1 + size2 + 1;
s = (char *) malloc(len * sizeof(char));
if (s == NULL)
        return (NULL);
for (i = 0; i < size1; i++)
        s = s1[i];
for (i = size1; i < len; i++)
        s = s2[i];
return (s);
}
}
