#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - return index of an element
 * @array: array
 * @size: array size
 * @cmp: pointer function
 * Return: index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
		else
			return (-1);
return (0);
}
