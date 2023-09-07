#include "main.h"
#include<stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest input number
* @max: lagrest input number
* Return: pointer to array
*/

int *array_range(int min, int max)
{
int *str;
int i;
int j = 0;

if (min > max)
	return (NULL);
str = malloc(sizeof(*str) * ((max - min) + 1));
if (str == NULL)
{
	return (NULL);
}
else
{
for (i = min; i <= max; i++)
{
	str[j] = i;
	j++;
}
}
return (str);
}
