#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 8; i > 0; i = i * (0.5))
	{
		if ((n & i) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
