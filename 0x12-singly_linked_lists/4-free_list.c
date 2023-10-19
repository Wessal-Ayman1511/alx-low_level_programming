#include "lists.h"
/**
 * free_list- function free list
 * @head: input
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *node1, *node2;

	if (!head)
		return;
	node1 = head;
	while (node1)
	{
		node2 = node1->next;
		free(node1->str);
		free(node1);
		node1 = node2;
	}
}
