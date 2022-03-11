#include <stdio.h>
/**
 * main-print alphabet in lowercase and then in uppercase
 * Description: only use putchar three times
 * Return: 0 success
 */
int main(void)
{
	int ch;

	/* print lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/* print uppercase */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
