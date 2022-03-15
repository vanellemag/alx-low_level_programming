#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char
 * @c: char
 *
 * Description: print char
 *
 * Return: char success
 *
*/
int _putchar (char c)
{
	return (write(1, &c, 1));
}
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
	ch = 2;
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
