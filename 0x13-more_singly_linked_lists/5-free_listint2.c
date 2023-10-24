#include "lists.h"
/**
 * free_listint2- function free list
 * @head: input
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *node1, *ptr;

	if (!head)
		return;
	node1 = *head;
	while (node1)
	{
		ptr = node1;
		node1 = node1->next;
		free(ptr);
	}
	*head = NULL;
}
