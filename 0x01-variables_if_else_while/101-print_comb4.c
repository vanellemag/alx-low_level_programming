#include <stdio.h>
/**
 * main-write a program that prints all possible
 * different combinations of three digits,
 * Description: The three digits must be different
 * Return: 0 success
 */
int main(void)
{
	int i, j, k, compt1, compt2, m, n;

	for (i = '0'; i <= '6'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				m = i;
				compt1 = 1;
				while (compt1 <= 2)
				{
					putchar(m);
					m = j;
					compt1++;
				}
				putchar(k);
				n = ',';
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
	putchar('7');
	compt2 = 1;
	n = '8';
	while (compt2 <= 2)
	{
		putchar(n);
		n = '9';
		compt2++;
	}
	putchar(' ');
	return (0);
}
