#include "hash_tables.h"

/**
 * free_item - A function to free an item
 * @node: the item to be freed
 * Return: void
 */

void free_item(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_delete - A function to free a hash table
 * @ht: Table to be freed
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
    hash_node_t *node, *current;

    for (i = 0 ; i < ht->size ; i++)
    {
        node = ht->array[i];
        while(node)
        {
            current = node->next;
            free(node);
            node = current;
        }
    }
    free(ht->array);
    free(ht);
}
