#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/*betty style doc for function main goes there */

/**
 * main-print output
 *
 * description:assign a random number to the variable n
 * Return: o if success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);

	return (0);
}
