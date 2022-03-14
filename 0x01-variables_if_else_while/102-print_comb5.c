#include <stdio.h>
/**
 * main-program that prints all possible
 * combinations of two two-digit numbers
 * Description: the numbers should range from 0 to 99
 * Return:0 success
*/
int main(void)
{
	int i, j, k, l, t, compt1, compt2, m, n;

	for (l = '0'; l <= '9'; l++)
	{
		for (i = '0'; j <= '9'; j++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				for (k = '0'; k <= '9'; k++)
				{
					m = l;
					compt1 = 1;
					while (compt1 <= 2)
					{
						putchar(m);
						m = i;
						compt1++;
					}
					putchar(' ');
					t = j;
					compt1 = 1;
					while (compt1 <= 2)
					{
						putchar(t);
						t = k;
						compt1++;
					}
					n = ' ';
					compt2 = 1;
					while (compt2 <= 2)
					{
						putchar(n);
						n = ' ';
						compt2++;
					}
				}
			}
		}
	}
	return (0);
}
