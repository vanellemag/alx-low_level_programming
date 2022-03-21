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

	i = 0;
	while (i <= n)
	{
		printf(a[i], ", ");
		i++;
	}
	printf("\n");
}
