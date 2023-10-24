#include "lists.h"
/**
 * delete_nodeint_at_index- function that delete element
 * @head: input
 * @index: input
 * Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1, *ptr2;
	unsigned int c = 0;

	if (!*head || !head)
		return (-1);
	if (!index)
	{
		ptr2 = *head;
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}
	ptr2 = *head;
	while (ptr2)
	{
		if (index == c)
		{
			ptr1->next = ptr2->next;
			free(ptr2);
			return (1);

		}
		c++;
		ptr1 = ptr2;
		ptr2 = ptr2->next;
	}
	return (1);
}
