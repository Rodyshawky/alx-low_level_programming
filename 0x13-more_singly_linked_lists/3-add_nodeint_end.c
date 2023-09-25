#include"lists.h"
#include<stdlib.h>
/**
 * add_nodeint_end - a function that add node at the end
 * @head: struct
 * @n: number
 * Return: pointer to address of new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *t;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->n = n;
	h->next = NULL;
	if (*head == NULL)
	{
		*head = h;
		return (h);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = h;
	return (h);
}
