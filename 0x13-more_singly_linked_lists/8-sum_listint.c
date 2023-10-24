#include "lists.h"
/**
 * sum_listint- function that sum data
 * @head: input
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
