#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */


char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *new;
	int len = 0;

	if (s1 == 0 && s2 == 0)
		return (NULL);

	len = strlen(s1) + strlen(s2);

	new = (char *)malloc(len * sizeof(char) + 1);

	if (new == 0)
		return (NULL);

	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}

	while (s2[j])
	{

		new[i] = s2[j];
		i++;
		j++;
	}

	return (new);
}
