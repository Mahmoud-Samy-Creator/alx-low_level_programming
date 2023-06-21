#include <stdio.h>
#include "main.h"

/**
 * _strlen - get the lenght of string
 * @s: str
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
