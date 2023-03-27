#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;
	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		int x = va_arg(arg, int);
		printf("%d", x);
		(separator == NULL)? 0 : putchar (*separator);
	}
	
	putchar('\n');
	
	va_end(arg);
}
