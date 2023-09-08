#include "hash_tables.h"

/**
 * hash_table_create - A function for table creation
 * @size: the size of the table
 * Return: A ptr to the table created
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;

    /* Allocate memory for the new hash table*/
    hash_table_t *table = (hash_table_t*)malloc(sizeof(hash_table_t));
    if (!table)
    {
        fprintf(stderr, "Error: malloc failed\n");
        return (NULL);
    }
    /* Assigning the table size*/
    table->size = size;

    /* Reallocate memory for items according to the size*/
    table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t));
    if (!(table->array))
        return (NULL);

    for (i = 0; i < table->size ; i++)
        table->array = NULL;

    return (table);
}