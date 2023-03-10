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
	int len = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	new = (char *)malloc(len * sizeof(char) + 1);

	if (new == NULL)
	{
		return (NULL);
	}

	else
		strcpy(new, str);

	return (new);
}

