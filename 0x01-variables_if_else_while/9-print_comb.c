#include <stdio.h>
/**
 *main-prints all possible combinations of single-digit numbers
 *Description:Numbers must be separated by ,
 *Return:0 success
*/
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		putchar(", ");
	/*	putchar(' ');*/
	}
	putchar('9');
	putchar(' ');
	return (0);
}
