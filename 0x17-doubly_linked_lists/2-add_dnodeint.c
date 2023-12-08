#include"lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = malloc(sizeof(dlistint_t));

	if (!head || !h)
	{
		free(h);
		return (NULL);
	}
	h->n = n;
	h->prev = NULL;
	if (!*head)
	{
		*head = h;
		h->next = NULL;
	}
	else
	{
		h->next = *head;
		(*head)->prev = h;
		*head = h;
	}
	return (h);
}
