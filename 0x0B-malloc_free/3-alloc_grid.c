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
int i;

s = malloc(sizeof(*s) * height);
if (height <= 0 || width <= 0 || s == NULL)
        return (NULL);
for (i = 0; i < height; i++)
{
s[i] = malloc(sizeof(**s) * width);
for (i = 0; i < height ; i++)
        s[i] = 0;
}
return (s);
}
