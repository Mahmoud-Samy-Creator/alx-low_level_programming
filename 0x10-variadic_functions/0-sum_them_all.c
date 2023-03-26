#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  sum all arguments
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;
	va_start (args, n);
	

	for (i = 0 ; i < n ; i++)
	{
		int x = va_arg (args, unsigned int);
		sum += x;
	}

	va_end (args);
	return (sum);

}
