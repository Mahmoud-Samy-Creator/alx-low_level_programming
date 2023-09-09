#include "hash_tables.h"

/**
 * hash_table_get - A function retrieves a value associated in a key
 * @ht: pointer to the hash table
 * @key: Key needed to get it's value
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *array;

	if (!ht)
		return (NULL);

	for (i = 0 ; i < ht->size ; i++)
	{
		array = ht->array[i];
		while (array)
		{
			if (strcmp(array->key, key) == 0)
				return (array->value);
			array = array->next;
		}
	}
	return (NULL);
}
