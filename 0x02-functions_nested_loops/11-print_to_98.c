#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print number from n to 98
 * @n: int
 * Print all natural numbers from n to 90
 * Return: 0 success
*/
void print_to_98(int n)
{
	int c;

	c = n;
	while (c <= 97)
	{
		printf("%d", c);
		printf(", ");
		c++;
	}
	printf("98");
	printf("\n");
}
