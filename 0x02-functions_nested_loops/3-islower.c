#include<stdio.h>
#include"main.h"

/**
 * _islower - check the character c is lower or not
 * @c: The character to to check
 *
 * Return: On success 1 ,return 0 if not.
 */

int _islower(int c)
{
int i;
if (c >= 97 &&  c <= 12)
	return (1);
else
	return (0);
}
