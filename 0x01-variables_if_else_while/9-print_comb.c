#include <stdio.h>
/**
 *main-prints all possible combinations of single-digit numbers
 *Description:Numbers must be separated by ,
 *Return:0 success
*/
int main(void)
{
	int ch, c, t,e,f;

	c = '5';
	e = '7';
	t = '3';
	f = '2';
	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar((c + e) + (t + f));
	return (0);
}
