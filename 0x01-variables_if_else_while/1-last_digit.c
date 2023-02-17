#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* more headers goes there
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is 0 and is 0", n);
	else if (n < 6)
		printf("Last digit of %d is and is less than 6 and not 0", n);
	return (0);
}
