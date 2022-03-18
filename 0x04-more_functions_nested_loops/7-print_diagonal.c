#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: int
 * Draws a diagonal line on the terminal
*/
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
