#include<stdio.h>
#include"main.h"

/**
 * _abs -absluote value of number
 *
 * Return: On success n.
 */

int _abs(int n)
{

if (n < 0)
return (n * -1);
else if (n > 0)
return (n);
else
return (0);
}
