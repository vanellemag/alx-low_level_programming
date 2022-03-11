#include <stdio.h>
/**
 *main-prints all single digit numbers of base 10 starting from 0
 *Description:not use any variable of type char
 *Return: 0 success
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
