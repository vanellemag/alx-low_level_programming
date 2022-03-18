#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9
 * 2 and 4 are not print
 *prints the numbers
*/
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2')
		{
			if (n != '4')
				_putchar(n);
		}
	}
	_putchar('\n');
}
