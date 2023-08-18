#include <stdio.h>
void startupfun (void) __attribute__ ((constructor));
/**
 * startupdun - A function executes before main function
 * Return: void
 */

void startupfun()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
