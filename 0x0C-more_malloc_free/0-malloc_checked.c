#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (!ptr)
		exit(98);

	return (b);
}

