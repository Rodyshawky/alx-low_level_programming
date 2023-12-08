#include"lists.h"
/**
 * *add_dnodeint_end - add new node at the end
 * @head: instance of struct
 * @n : number
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = malloc(sizeof(dlistint_t)), *node;

	if (!head || !h)
	{
		free(h);
		return (NULL);
	}
	h->n = n;
	h->next = NULL;
	if (!*head)
	{
		*head = h;
		h->prev = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
		{
		node = node->next;
		}
		node->next = h;
		h->prev = node;
	}
	return (h);
}
