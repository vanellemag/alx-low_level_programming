#include <stdio.h>
/**
 *main-prints all possible combinations of single-digit numbers
 *Description:Numbers must be separated by ,
 *Return:0 success
*/
int main(void)
{
	int ch, a;

	a = "9 ";
	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar(a);
	return (0);
}
