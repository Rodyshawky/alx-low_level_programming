#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint - a function that add node
 * @head: struct
 * @n: number
 * Return: pointer to address of new node or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	else
	{
	h->n = n;
	h->next = *head;
	*head = h;
	}
	return (h);
}
