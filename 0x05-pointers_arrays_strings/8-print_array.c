#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: int
 * @n: int
*/
void print_array(int *a, int n)
{
	int i;

	if (n == 0)
	{
		printf("%d", a[n]);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
			i++;
		}
		printf("%d", a[n]);
	}
	printf("\n");
}
