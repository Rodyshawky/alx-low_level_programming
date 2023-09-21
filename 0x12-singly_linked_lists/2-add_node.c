#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new node at the begin of list
 * @head: the head of node
 * @str: string
 * Return: the address of the new element, null if not.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	list_t *ls;
	int i = 0;

	ls = malloc(sizeof(list_t));
	if (ls == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(ls);
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	ls->str = str_dup;
	ls->len = i;
	ls->next = *head;

	*head = ls;

	return (ls);
}
