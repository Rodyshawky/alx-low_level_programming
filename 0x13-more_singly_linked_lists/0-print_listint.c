#include"lists.h"
#include<stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint- print all element on the list
 * @h: pointer to struct
 * Return: count of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
