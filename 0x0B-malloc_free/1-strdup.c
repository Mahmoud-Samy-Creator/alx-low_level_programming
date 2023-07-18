#include "main.h"

/**
 * _strdub - A function to make a dupulicated string
 * @str: string of char
 * Return - array of char
 *
 */

char *_strdub(const char *str)
{
	int size = 0, i = 0;
	char *dub = NULL;

	if (!str)
		return (NULL);

	while (str[size])
		size++;

	dub = (char *)malloc(size + 1);

	if (dub == NULL)
		return (NULL);

	while (str[i])
	{
		dub[i] = str[i];
		i++;
	}
	dub[i] = '\0';

	return (dub);
}
