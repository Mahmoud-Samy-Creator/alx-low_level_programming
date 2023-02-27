#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap argument values
 * @a: pointer (1)
 * @b: pointer (2)
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
