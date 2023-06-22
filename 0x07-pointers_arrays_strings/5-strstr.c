#include "main.h"
#include <string.h>

/**
 * _strlen - A function calculates string length.
 * @s: string
 * Return: string lenght
 */

int _strlen(char *s)
{
	short i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}

/**
 * _strstr - A function that locates a substring.
 * @haystack: haystack string
 * @needle: needle string
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;

	/*printf("size: %d\n", _strlen(haystack));*/

	if (!needle)
		return (NULL);

	while (haystack)
	{
		if (j == _strlen(needle))
			return (haystack);

		if (haystack[i] == needle[j])
			{
				j++;
				i++;
				k++;
				continue;
			}
		else
			{
				i = 0;
				j = 0;
				k++;
			}

		if (k == _strlen(haystack))
			return (NULL);

		haystack++;
	}
	return (NULL);
}

