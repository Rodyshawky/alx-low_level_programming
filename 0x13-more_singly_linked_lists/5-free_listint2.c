#include"lists.h"
#include<stdlib.h>
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: struct
 * Return: free
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (*head == NULL)
		return;
	h = *head;
	*head = NULL;
	while (h)
	{
		free(h);
		h = h->next;
	}
}
