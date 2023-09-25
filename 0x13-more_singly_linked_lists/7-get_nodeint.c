#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head
 * @index: input index
 * Return: returns the nth node of a listint_t linked list else 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
