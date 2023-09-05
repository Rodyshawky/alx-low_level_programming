#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
int **s;
int i, j;

if (height <= 0 || width <= 0)
	return (NULL);
s = malloc(height * sizeof(int *));
if (s == NULL)
{
	return (NULL);
}
for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(int));
if (s[i] == NULL)
{
	for (j = 0; j < i;  j++)
		free(s[j]);
	free(s);
	return (NULL);
}
	for (j = 0; j < width; j++)
	{
		s[i][j] = 0;
	}
}
return (s);
}
