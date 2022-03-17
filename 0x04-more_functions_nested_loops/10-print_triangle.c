#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size:int
 * prints a triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		j = 1;
		while (j <= size)
		{
			for (i = 1; i <= size - j; i++)
			{
				_putchar(' ');
			}
			for (i = size - j; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
}
