#include"main.h"
#include<string.h>
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, mul = 1;
	int len = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else
		{
		dec += (b[i] - 48) * mul;
		mul *= 2;
		}
	}
	return (dec);
}
