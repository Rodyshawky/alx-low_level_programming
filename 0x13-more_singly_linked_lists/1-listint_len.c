#include"lists.h"
#include<stdio.h>
#include <stddef.h>

/**
 * listint_len- print all element on the list
 * @h: pointer to struct
 * Return: count of data element
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
