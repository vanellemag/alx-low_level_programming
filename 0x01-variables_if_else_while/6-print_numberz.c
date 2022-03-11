#include <stdio.h>
/**
 *main-prints all single digit numbers of base 10 starting from 0
 *Description:not use any variable of type char
 *Return: 0 success
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
