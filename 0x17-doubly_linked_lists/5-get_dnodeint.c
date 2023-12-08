#include"lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: instance of struct
 * @index : index of specific node
 * Return: address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		else
		{
			count++;
			head = head->next;
		}
	}
	return (NULL);
}
