#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int
 * @n: int
*/
void reverse_array(int *a, int n)
{
	int i, j;
	int c[13];

	i = n - 1;
	while (i >= 0)
	{
		*(c + n - 1 - i) = *(a + i);
		i--;
	}
	for (j = 0; j < n; j++)
	{
		*(a + j) = *(c + j);
	}
}
