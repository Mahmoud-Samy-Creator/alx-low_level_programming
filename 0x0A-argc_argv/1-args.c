#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	for (i = 0 ; i < argc ; i++);

	printf("%d", i);

	return (0);
}

