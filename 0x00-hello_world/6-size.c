#include <stdio.h>

/**
 * main-prints the size of various type on the computer
 *
 * Description:Using main function
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	peintf("Size of a long: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long: %ld byte(s)\n", sizeof(ll));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
