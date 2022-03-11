#include <stdio.h>
/**
 * main-print alphabet in lowercase except q and e
 * Description: only use putchar function
 * Return: 0 success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
