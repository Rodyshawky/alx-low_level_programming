#include"lists.h"
/**
 * dlistint_len - print all node
 * @h: instance of struct
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
