#include <stdio.h>
/**
 * main-prints the alphabet in lowercase
 * Description: only use putchar function
 * Return: 0 success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

