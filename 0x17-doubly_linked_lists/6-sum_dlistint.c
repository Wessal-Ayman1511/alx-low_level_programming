#include "lists.h"
/**
 * sum_dlistint- function that add node
 * @head: input
 * Return: num of nodes
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
