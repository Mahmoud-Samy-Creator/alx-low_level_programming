#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*if_else function - Determine if the variable n is positive or negative or zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
