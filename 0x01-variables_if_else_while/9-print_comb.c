#include <stdio.h>
/**
 *main-prints all possible combinations of single-digit numbers
 *Description:Numbers must be separated by ,
 *Return:0 success
*/
int main(void)
{
	int ch, i, compt, l;

	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		i = ',';
		compt = 1;
		while (compt <= 2)
		{
			putchar(i);
			i = ' ';
			compt++;

		}
	}
	l = '9';
	compt = 1;
	while (compt <= 2)
	{
		putchar(l);
		l = ' ';
		compt++;
	}
	return (0);
}
