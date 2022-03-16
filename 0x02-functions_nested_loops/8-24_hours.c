#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 * Description: Starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int h1, h2, m1, m2, c, k, t;

	for (h1 = '0'; h1 <= '1'; h1++)
	{
		for (h2 = '0'; h2 <= '9'; h2++)
		{
			for (m1 = '0'; m1 <= '5'; m1++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					k = h1;
					c = 1;
					while (c <= 2)
					{
						_putchar(k);
						k = h2;
						c++;

					}
					_putchar(':');
					t = m1;
					c = 1;
					while (c <= 2)
					{
						_putchar(t);
						t = m2;
						c++;
					}
					_putchar('\n');
				}
			}
		}
	}
	h1 = '2';
	for (h2 = '0'; h2 <= 3; h2++)
	{
		for (m1 = '0'; m1 <= '5'; m1++)
		{
			for (m2 = '0'; m2 <= '9'; m2++)
			{
				k = h1;
				c = 1;
				while (c <= 2)
				{
					_putchar(k);
					k = h2;
					c++;
				}
				t = m1;
				c = 1;
				while (c <= 2)
				{
					_putchar(t);
					t = m2;
					c++;
				}
				_putchar('\n');
			}
		}
	}
}
