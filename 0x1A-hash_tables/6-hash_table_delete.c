#include "hash_tables.h"

/**
 * free_item - A function to free an item
 * @node: the item to be freed
 * Return: void
*/

void free_item(hash_node_t *item)
{
    free(item->key);
    free(item->value);
    free(item);
}
/**
 * hash_table_delete - A function to free a hash table
 * @ht: Table to be freed
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i = 0;

    for (i = 0 ; i < ht->size ; i++)
    {
        hash_node_t *node = ht->array[i];
        if (node)
        {
            free(node);
        }
    }
    free(ht->array);
    free(ht);
}