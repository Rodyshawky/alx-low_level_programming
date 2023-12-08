#include "lists.h"
/**
 * insert_dnodeint_at_index - get node at index
 * @h: instance of struct
 * @idx : index of specific node
 * @n: number
 * Return: address of node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = tmp->next;
	node->prev = tmp;
	tmp->next->prev = node;
	tmp->next = node;
	return (node);
}
