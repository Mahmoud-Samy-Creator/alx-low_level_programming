#include "variadic_functions.h"

/**
 * print_strings - A function prints strings
 * @separator: string to be printed between strings
 * @n: number of arguments passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		char *str = va_arg(args, char*);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
