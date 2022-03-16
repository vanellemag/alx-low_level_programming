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
	if (n < 98)
	{
		while (n <= 97)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
	}
	if (n > 98)
	{
		while (n >= 97)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
	}
	printf("98");
	printf("\n");
}
