#include "hash_tables.h"

/**
 * create_node - A function to create new node
 * @key: the node key
 * @value: the node value
 * Return: pointer to the created node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	/* Allocate memory for a new node*/
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);

	/* Assign key & value*/
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - A function set a node in the table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 * Return: setted node
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *node;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	/* Create hash code for the key & determine the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Creating a node*/
	node = create_node(key, value);
	if (!node)
		return (0);

	/* Assign the node int the hash table index*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			if (strcmp(ht->array[index]->value, value) == 0)
			{
				return (1);
			}
			else
			{
				strcpy(ht->array[index]->value, value);
				return (1);
			}
		}
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (1);
}
