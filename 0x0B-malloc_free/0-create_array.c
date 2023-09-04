#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars intail it of specific char
 * @size: input number
 * @c: input char
 * Return: char array or NULL if not
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
	return (NULL);
s = (char*) malloc(size * sizeof(char));
if (s == NULL )
{
return (NULL);
}
else
{
	for (i = 0; i < size; i++)
		s[i] = c;
	return(s);
}
}	
