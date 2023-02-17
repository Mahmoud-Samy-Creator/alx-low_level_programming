#include <stdio.h>
/**
 * main - main block
 * putchar - prints the upper case of a char
 * Return: 0
*/
int main(void)
{
	char ch = 'A';

	while (ch <= 'Z')
	{
		putchar (ch);
		ch++;
	}
	return (0);
}
