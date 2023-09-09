#include "hash_tables.h"
/**
 * hash_table_delete - A function to free a hash table
 * @ht: Table to be freed
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *current;

	if (!ht)
		return;

	for (i = 0 ; i < ht->size ; i++)
	{
		node = ht->array[i];
		while (node)
		{
			current = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = current;
		}
	}
	free(ht->array);
	free(ht);
}
