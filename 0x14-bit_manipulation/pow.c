#include "main.h"

/**
 * _pow - a a function for power
 * @x: base number
 * @y: power number
 * Returns: int
 */

int _pow(int base, int exponent)
{
	int i = 0;
	int result = 1;

	if (exponent == 0)
		return (1);

	else if (exponent > 0)
	{
		for (i = 0 ; i < exponent ; i++)
			result *= base;
	}

	else
	{
		for (i = 0 ; i > exponent ; i--)
			result /= base;
	}

	return (result);
}
