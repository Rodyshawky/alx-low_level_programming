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
int size = 0;
int i;

size = width * height;
if (size < 0)
{
        return (NULL);
}
else
{
s = (int **) malloc(size  * sizeof(int));
if (s == NULL)
        return (NULL);
for (i = 0; i < size ; i++)
        s[i] = 0;
return (s);
}
}
