#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: int
 * @size: int
 * @cmp: int
 *
 *Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, co, j;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		i = 0;
		co = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				co = 1;
				j = i;
				break;
			}
			i++;
		}
		if (co != 1)
			return (-1);
		else
			return (array[j]);
	}
	return (0);
}
