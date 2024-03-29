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

	while (*s)
	{
		while (*accept)
		{
			if (*s != *accept)
			{
				accept_counter++;
				accept++;
			}
			else
				return (s);
		}
		accept -= accept_counter;
		accept_counter = 0;
		s++;
	}
	return (NULL);
}
