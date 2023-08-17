#include "main.h"

/**
 * _isdigit -check number between 0-9
 * @c: input number of function
 * Return: On success 1 if not between 0-9 retun 0.
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 58)
{
return (1);
}
else
return (0);
}
