#include"lists.h"
#include<stdlib.h>
/**
 * delete_nodeint_at_index - delete node at index in list
 *
 * @head: head of list
 * @index: index to deleted node starting at 0
 * Return: 1 if success,-1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *t;

	h = *head;
	t = *head;
	if (*head == NULL || head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = t->next;
		free(t);
		t = NULL;
	}
	else
	{
	index--;
	while (index != 0)
	{
		h = t;
		t = t->next;
		index--;
	}
	h->next = t->next;
	free(t);
	t = NULL;
	}
	return (1);
}
