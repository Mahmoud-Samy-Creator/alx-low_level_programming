#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * create_array - function creates a string
 * @size: array size
 * @c: the specific character
 * Return: string
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(size);
	if (s == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (str);
}
