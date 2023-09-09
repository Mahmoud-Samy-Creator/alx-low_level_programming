#include "hash_tables.h"

/**
 * hash_table_get - A function retrieves a value associated in a key
 * @ht: pointer to the hash table
 * @key: Key needed to get it's value
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *array;

	if (!ht)
		return (NULL);

	array = ht->array[index];

	while (array)
	{
		if (strcmp(array->key, key) == 0)
			return (array->value);
		array = array->next;
	}
	return (NULL);
}
