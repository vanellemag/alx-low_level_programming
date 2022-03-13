#include <stdio.h>
/**
 * main-prints all possible different combinations of two digits.
 * Description:numbers must be separated by , followed by space
 * Return: 0 succes
*/
int main(void)
{
	int i, j, compt1, compt2, m, n;
	/* processus */
	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			m = i;
			compt1 = 1;
			while (compt1 <= 2)
			{
				putchar(m);
				m = j;
				compt1++;
			}
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
