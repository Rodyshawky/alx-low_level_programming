#include "main.h"
#include<stdlib.h>
/**
* _calloc - allocates memory for an array
*@nmemb: input number
*@size: input size to allocate
*Return: poiner to string
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i;

if (nmemb == 0 || size == 0)
	return (NULL);
s = malloc(size * nmemb);
if (s == NULL)
{
	return (NULL);
}
else
{
for (i = 0; i < (nmemb * size); i++)
{
	s[i] = 0;
}
}
return (s);
}
