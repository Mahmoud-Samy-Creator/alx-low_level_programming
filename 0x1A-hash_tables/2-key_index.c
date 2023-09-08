#include "hash_tables.h"
/**
 * key_index - A function to calulate the index of the key
 * @key: the key of the node
 * @size: the size of the array
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
