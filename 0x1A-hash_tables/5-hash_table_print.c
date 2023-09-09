#include "hash_tables.h"

/**
 * hash_table_print - A function to print a table datum
 * @ht: the table to print it's datum
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *array;

	if (!ht)
		return;

	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		array = ht->array[i];
		while (array)
		{
			printf("'%s':'%s'", array->key, array->value);
			if (array->next)
				printf(", ");
			array = array->next;
		}
	}
	printf("}\n");
}
