#include"hash_tables.h"
/**
 *hash_table_set - set the key and value
 *@ht: hashtable
 *@key: the key
 *@value: the value
 *Return: 1 always succes
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *array, *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	array = ht->array[index];
	while (array)
	{
		if (strcmp(array->key, key) == 0)
		{
			free(array->value);
			array->value = strdup(value);
			if (array->value == NULL)
				return (0);
			return (1);
		}
		array = array->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
