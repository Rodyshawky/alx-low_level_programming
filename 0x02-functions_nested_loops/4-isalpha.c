#include<stdio.h>
#include"main.h"

/**
 * _isalpha - check the character c is lower or upper or not
 * @c: The character to to check
 *
 * Return: On success 1 ,return 0 if not.
 */

int _isalpha(int c)
{
if ((c >= 97 &&  c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}

