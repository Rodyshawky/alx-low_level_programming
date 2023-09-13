#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates an array
 * @array: array pointer
 * @size: size of array
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
