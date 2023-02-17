#include <stdio.h>
/**
 * main - main block
 * while loop - printing alphabets lower and upper case
 * Return: 0
*/
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar (lower);
		lower++;
	}
	putchar('\n');
	while (upper <= 'Z')
	{
		putchar (upper);
		upper++;
	}
	return (0);
}
