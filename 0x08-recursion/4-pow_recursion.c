#include<stdio.h>
#include"main.h"

/**
 * _pow_recursion - get x power of y
 * @x: input number
 * @y: input number
 * Return: x power of y.
 */
int _pow_recursion(int x, int y)
{
int pow = 1;

if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
pow = x *  _pow_recursion(x , y - 1);
return (pow);
}
