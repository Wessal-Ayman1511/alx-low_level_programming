#include "lists.h"
/**
 * *free_dlistint- function that free
 * @head: input
 * Return: num of nodes
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	while (head->next != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
		ptr = NULL;
	}
	free(head);
	head = NULL;
}
