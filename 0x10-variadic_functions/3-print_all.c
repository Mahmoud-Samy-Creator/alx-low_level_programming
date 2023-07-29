#include "variadic_functions.h"
/**
 * print_int - A function to print an integer
 * @args: variadic functoion list
 * Return: nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - A function to print a char
 * @args: variadic functoion list
 * Return: nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_float - A function to print a float
 * @args: variadic functoion list
 * Return: nothing
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - A function to print a string
 * @args: variadic functoion list
 * Return: nothing
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
 * print_all - A function that prints anything
 * @format: variable formats
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned long int i = 0, j = 0;
	va_list args;
	placeholders op[] = {
		{'i', print_int},
		{'c', print_char},
		{'f', print_float},
		{'s', print_str}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == op[j].ch)
			{
				op[j].ptr(args);
				if (i < strlen(format) - 1)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");

	}
}
