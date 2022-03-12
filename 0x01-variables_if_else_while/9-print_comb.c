#include <stdio.h>
/**
 *main-prints all possible combinations of single-digit numbers
 *Description:Numbers must be separated by ,
 *Return:0 success
*/
int main(void)
{
	int ch, c, t, e, f, s, m;

	c = '5';
	e = '7';
	s = c + e;
	t = '3';
	f = '2';
	m = t + f;
	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar(s + m);
	return (0);
}
