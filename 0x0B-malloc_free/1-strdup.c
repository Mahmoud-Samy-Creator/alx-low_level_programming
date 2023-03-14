#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{

	char *new;
	int len = strlen(str);

	if (str == NULL)
                return (NULL);

	new = (char *)malloc(len * sizeof(char) + 1);

	if (new == NULL)
	{
		return (NULL);
	}

	else
		strcpy(new, str);

	return (new);

	free(new);
}

