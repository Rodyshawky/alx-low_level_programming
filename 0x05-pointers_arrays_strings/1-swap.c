#include"main.h"

/**
 * swap_int- swap value of two number
 * @a: input pointer of function
 * @b:input pointer of function
 * Return: On success 0.
 */

void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
