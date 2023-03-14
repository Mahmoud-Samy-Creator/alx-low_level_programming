#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 *
 * *create_array - function that creates an array of chars
 * @size - number of array elements
 * @c - char
 * Return - pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == 0)
		return (NULL);
	else
		while (i < size)
			str[i] = c;

	return (str);
}
