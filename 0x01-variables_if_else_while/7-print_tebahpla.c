#include <stdio.h>
/**
 * main-prints the lowercase alphabet
 * Description: in reverse, followed by a new line
 * Return: 0 success
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
