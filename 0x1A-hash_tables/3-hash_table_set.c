#include "hash_tables.h"

/**
 * *setNode - set node
 * @key: input
 * @value: input
 *
 * Return: newnode.
 */
hash_node_t *setNode(const char *key, const char *value)
{
	hash_node_t *newNode = malloc(sizeof(hash_node_t));

	if (newNode == NULL)
	return (NULL);

	newNode->key = strdup(key);

	if (newNode->key == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->value = strdup(value);

	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	return (newNode);
}

/**
 * hash_table_set - set value in hashtable
 * @key: input
 * @value: input
 * @ht: input
 * Return: input
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *cur, *node;
	char *n_value;


	if (ht == NULL || key == NULL || value == NULL ||
		ht->array == NULL || ht->size == 0 || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			n_value = strdup(value);
			if (n_value == NULL)
			return (0);
			free(cur->value);
			cur->value = n_value;
			return (1);
		}
		cur = cur->next;
	}
	node = setNode(key, value);
	if (node == NULL)
	return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
