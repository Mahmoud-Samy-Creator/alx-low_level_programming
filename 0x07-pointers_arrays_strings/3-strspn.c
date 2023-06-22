#include "main.h"
#include <string.h>

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: A pointer points to strng to be checked
 * @accept: A pointer points to string to be searched
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	short accept_size_counter = 0, accept_size = 0;

	while (*accept != '\0')
	{
		accept_size++;
		accept++;
	}
	accept -= accept_size;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s != *accept)
			{
				accept++;
				accept_size_counter++;
			}
			else
			{
				accept -= accept_size_counter;
				accept_size_counter = 0;
				break;
			}
		}
		if (accept_size_counter >= accept_size)
			break;
		s++;
		result++;
	}
	return (result);
}
