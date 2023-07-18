#include <stdlib.h>
#include "main.h"

/**
 * str_concat - A function concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, len = 0, i = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	len = len1 + len2;
	new  = (char *)malloc(len + 1);

	if (!new)
		return (NULL);

	while (s1 && s1[i])
	{
		new[i] = s1[i];
		i++;
	}

	while (s2 && s2[i])
	{
		new[len1 + i] = s2[i];
		i++;
	}

	new[len1 + i] = '\0';

	return (new);
}

