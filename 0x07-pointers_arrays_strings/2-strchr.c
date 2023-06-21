#include "main.h"

/**
 * _strchr - A function locates a character in a string
 * @s: A pointer points to the string
 * @c: A pointer points to the character to be located
 * Return: A pointer to first occurrence of the char c
 *
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
