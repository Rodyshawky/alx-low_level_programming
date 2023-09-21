#include "lists.h"
#include<stdio.h>
/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		num_elem++;
		h = h->next;
	}
	printf("%ld", num_elem);
	return (num_elem);
}
