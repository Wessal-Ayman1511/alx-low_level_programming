#include "hash_tables.h"
/**
 * hash_table_delete - delete table
 * @ht: input
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur;

	if (ht == NULL || ht->array == NULL)
	return;
	for (i = 0; i < ht->size; i++)
	{

		while (ht->array[i] != NULL)
		{
			cur = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			ht->array[i] = cur;
		}
	}
	free(ht->array);
	free(ht);

}
