#include "lists.h"
/**
 * free_listint- function free list
 * @head: input
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
