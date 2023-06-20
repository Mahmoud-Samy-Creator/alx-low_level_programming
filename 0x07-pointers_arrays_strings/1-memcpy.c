#include "main.h"

/**
 * _memcpy - A function copies memory area.
 *@dest: A pointer points to the destination
 *@src: A pointer points to the source
 *@n: required size to copy
 *Returns: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	
	return (dest);
}


