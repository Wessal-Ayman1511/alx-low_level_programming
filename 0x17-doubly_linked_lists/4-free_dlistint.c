#include "lists.h"
/**
 * *free_dlistint- function that free
 * @head: input
 * Return: num of nodes
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
