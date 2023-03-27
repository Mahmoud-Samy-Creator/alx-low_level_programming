#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *c;

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		c = va_arg(arg, char*);
		(c == NULL) ? printf("nil") : printf("%s", c);
		(separator != NULL && i != n-1) ? printf("%s", separator) : 0;
	}
	
	va_end (arg);

	putchar('\n');
}
