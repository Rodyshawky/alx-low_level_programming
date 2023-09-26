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
	if (tmp ==  NULL)
		return (NULL);
	h = *head;
	while (idx != 1)
	{
		h = h->next;
		idx--;
	}
	if (tmp != NULL)
	{
		tmp->next = h->next;
		h->next = tmp;
	}
	else
	{
		tmp->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
	}
	tmp->n = n;
	return (tmp);
}
