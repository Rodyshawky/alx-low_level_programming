#include"lists.h"
#include<stdlib.h>
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: struct
 * Return: free
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (next = (*head)->next; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
