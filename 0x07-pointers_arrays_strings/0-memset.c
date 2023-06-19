#include "main.h"

/**
 * _memset - A function fills memory with a constant byte
 * @s: The address of memory to print
 * @b: The modified address to assign
 * @n: Size to be filled with constant bytes
 * Return: strings
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


