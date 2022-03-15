#include "main.h"
/**
 * main-print putchar followed by new line
 * Description: don't use standard library
 * Return: 0 success
*/
int main(void)
{
	int ch, i;

	i = '_';
	ch = 1;
	while (ch <= 2)
	{
		_putchar (i);
		i = 'p';
		ch++;

	}
	i = 'u';
	ch = 1;
	while (ch <= 2)
	{
		_putchar (i);
		i = 't';
		ch++;
	}
	i = 'c';
	ch = 1;
	while (ch <= 2)
	{
		_putchar (i);
		i = 'h';
		ch++;
	}
	i = 'a';
	ch = 1;
	while (ch <= 2)
	{
		_putchar (i);
		i = 'r';
		ch++;
	}
	_putchar ('\n');
	return (0);
}
