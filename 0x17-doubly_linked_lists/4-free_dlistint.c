#include "lists.h"
/**
 * free_dlistint - free list
 * @head: instance of struct
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *node;

while (head)
{
node = head;
head = head->next;
free(node);
}
}
