#include "lists.h"
/**
 * *insert_nodeint_at_index- function that inset node in pos
 * @head: input
 * @idx: input
 * @n: input
 * Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *ptr1 = malloc(sizeof(listint_t));
	unsigned int c = 0;

	if (!ptr1 || !head)
		return (NULL);
	ptr1->n = n;
	ptr1->next = NULL;

	if (!idx)
	{
		ptr1->next = *head;
		*head = ptr1;
		return (ptr1);
	}
	ptr = *head;
	while (ptr)
	{
		if (c == idx - 1)
		{
			ptr1->next = ptr->next;
			ptr->next = ptr1;
			return (ptr1);
		}

		ptr = ptr->next;
		c++;
	}
	free(ptr);
	return (NULL);
}
