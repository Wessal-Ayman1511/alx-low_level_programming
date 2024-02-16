#include "hash_tables.h"
#include<stdbool.h>

/**
 * hash_table_print - print table
 * @ht: input
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur;
	bool flag = false;

	if (ht == NULL || ht->array == NULL)
	return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		while (cur != NULL)
		{
			if (flag == true)
			printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			flag = true;
			cur = cur->next;
		}
	}
	printf("}\n");

}
