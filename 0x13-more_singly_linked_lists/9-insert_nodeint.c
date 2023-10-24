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
	listint_t *ptr = *head;
	listint_t *ptr1 = malloc(sizeof(listint_t));

	if (!*head || !head)
		return (NULL);
	ptr1->n = n;
	ptr1->next = NULL;

	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr1->next = ptr->next;
	ptr->next = ptr1;
	return (ptr1);
}
