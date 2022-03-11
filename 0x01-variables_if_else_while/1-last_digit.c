#include <stdlib.h>
#include <time.h>
 /* more headers goes there */
#include <stdio.h>
 /* betty style doc for function main goes there */

/**
 * main-print the last digit of the number stored in the variable n
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int compt = n % 10;

	if (compt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, compt);
	if (compt == 0)
		printf("Last digit of %d is %d and is 0\n", n, compt);
	if (compt < 6 && compt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, compt);

	return (0);
}
