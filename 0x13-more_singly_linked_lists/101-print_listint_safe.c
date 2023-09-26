#include"lists.h"
#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int count;

	if (head == NULL)
		exit(98);
	else
	{
	while (head)
	{
		if (head->next != NULL)
		{
			printf("[%p] %d\n", (void *)&head, head->n);
			head = head->next;
			count++;
		}
	}
	return (count);
	}
}
