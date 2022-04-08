#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc(max * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i < max; i++)
	{
		p[i] = i;
	}
	return (p);
}
