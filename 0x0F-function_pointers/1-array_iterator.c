#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: int
 * @size: size_t
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
