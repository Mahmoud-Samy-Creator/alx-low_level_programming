#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == 0)
	{
		return (NULL);
	}

	else
		while (i < size)
		{
			str[i] = c;
			i++;
		}

	return (str);
}
