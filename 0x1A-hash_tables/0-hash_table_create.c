#include "hash_tables.h"

/**
 * hash_table_create -  make hash table.
 * @size: input
 * Return: input
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int c = 0;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (; c < size ; c++)
	{
		ht->array[c] = NULL;
	}
	return (ht);

}
