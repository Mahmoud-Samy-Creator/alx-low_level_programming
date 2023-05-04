#include "main.h"

/**
 * binary_to_uint - A function converts a binary number to an unsigned int
 * @b: A pointer to characters represents the binary number
 * Returns: int
 */

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


unsigned int binary_to_uint(const char *b)
{

	int i = 0, j = 0, num = 0,  sum = 0;

	if (b == NULL)
		return (0);

	/* counting the number of chars */
	while(b[i])
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}

	while (i--)
	{
		num = (b[i] - '0') * _pow(2, j);
		sum += num;
		j++;
	}
	
	return (sum);
}
