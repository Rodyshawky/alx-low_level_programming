#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
void *s;

s = malloc(b);
if (s == NULL)
	exit(98);
return (s);
}
