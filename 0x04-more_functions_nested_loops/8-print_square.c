#include "main.h"
/**
 * print_square - prints a square
 * @size: int
 * Prints a square, followed by a new line
*/
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			_putchar('#');
			i++;
		}
	}
	_putchar('\n');
}
