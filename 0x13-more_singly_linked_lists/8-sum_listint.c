#include"lists.h"
/**
 * sum_listint - sum the data numbers
 * @head: pointer to head
 * Return: sum of numbers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
