#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup;
	int i = 0;
	list_t *first, *last;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(first);
		return (NULL);
	}
	while (str[i])
		i++;

	first->str = str_dup;
	first->len = i;
	first->next = NULL;

	if (*head == NULL)
		*head = first;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	}

	return (*head);
}

