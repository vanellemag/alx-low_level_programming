#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	array = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	if (array == NULL)
		return (NULL);
	if (width == 0 || height == 0 || width < 0 || height < 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
	}
	return (array);
}
