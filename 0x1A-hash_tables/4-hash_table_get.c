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

	if (ht == NULL || key == NULL ||
		ht->array == NULL || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	cur = ht->array[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			return (cur->value);
		}
		cur = cur->next;
	}
	return (NULL);
}

