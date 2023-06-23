#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: The string to be acccessed
 * @to: The distination string
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
