#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * numbers from 0 to 14
 *
*/
void more_numbers(void)
{
	int n, i, j, l;

	i = 1;
	while (i <= 10)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
		for (n = '0'; n <= '4'; n++)
		{
			l = '1';
			j = 1;
			while (j <= 2)
			{
				_putchar(l);
				l = n;
				j++;
			}
		}
		_putchar('\n');
		i++;
	}
}
