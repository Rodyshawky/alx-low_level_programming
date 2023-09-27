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
	listint_t *h, *tmp;

	tmp = malloc(sizeof(listint_t));
	h = *head;
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL || idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
	}
	if (tmp != NULL)
	{
	while (idx != 1)
	{
		h = h->next;
		idx--;
	}
		tmp->next = h->next;
		h->next = tmp;
	}
	else
	{
		return (NULL);
	}
	return (tmp);
}
