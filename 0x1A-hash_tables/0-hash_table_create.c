#include "hash_tables.h"

/**
 * hash_table_create - A function for table creation
 * @size: the size of the table
 * Return: A ptr to the table created
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;
    hash_table_t *table = (hash_table_t*)malloc(sizeof(hash_table_t));

    if (!table)
    {
        fprintf(stderr, "Error: malloc failed\n");
        return (NULL);
    }

    table->size = size;

    /* Reallocate memory for items according to the size*/
    table->array = malloc(sizeof(hash_node_t) * size);
    if (!(table->array))
    {
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

    for (i = 0; i < size ; i++)
        table->array[i] = NULL;

    return (table);
}