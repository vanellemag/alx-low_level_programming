#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	m = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (m == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			m[i] = c;
			i++;
		}
		m[i] = '\0';
	}
	return (m);
}
