#include "hash_tables.h"

/**
 * hash_table_get- function to get value
 * @ht: input
 * @key: input
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	cur = ht->array[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			return (cur->value);
		}
	}
	return (NULL);
}

