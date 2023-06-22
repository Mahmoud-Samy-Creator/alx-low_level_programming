#include "main.h"

/**
 * _strpbrk - A function searches a string for any of a set of bytes.
 * @s: A string to be searched the occurance in
 * @accept: A string to be searched for
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	short accept_counter = 0;

	if (*accept == '\0')
		return (s);
	if (*s == '\0')
		return (NULL);

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s != *accept)
			{
				accept_counter++;
				accept++;
			}
			else
				return (s);
		}
		if (*accept == '\0')
			accept -= accept_counter;
		s++;
	}
	return (NULL);
}
