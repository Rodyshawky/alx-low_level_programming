#include"lists.h"
#include<stdlib.h>
/**
 * pop_listint - Delete the head
 * @head: head
 * Return: data of the head else return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head  == NULL)
		return (0);
	tmp = *head;
	num = tmp->n;
	free(tmp);
	tmp->next = NULL;
	return (num);
}
