#include "main.h"

/**
 * _strpbrk - A function searches a string for any of a set of bytes.
 * @s: A string to be searched the occurance in
 * @accept: A string to be searched for
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int result = 0;
	short accept_counter = 0;

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
}
