#include"lists.h"
#include<stdlib.h>
/**
 * insert_nodeint_at_index - inserts a listint_t node at index in list
 *
 * @head: head of list
 * @idx: index to add node at, starting at 0
 * @n: value of node to add
 *
 * Return: new node address if success, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *tmp = *head;
	unsigned int i;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (h == NULL || h->next == NULL)
			return (NULL);
		h = h->next;
	}
	tmp->next = h->next;
	h->next = tmp;
	return (tmp);
	if (idx > i)
                return (NULL);
}
