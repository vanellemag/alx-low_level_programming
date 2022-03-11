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

	printf("Size of a char: %u byte(s)\n", sizeof(c));
	printf("Size of an int: %u byte(s)\n", sizeof(i));
	printf("Size of a long int: %u byte(s)\n", sizeof(l));
	printf("Size of a long long int: %u byte(s)\n", sizeof(ll));
	printf("Size of a float: %u byte(s)\n", sizeof(f));
	return (0);
}
