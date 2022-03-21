#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: char
 * Return: string in reverse
*/
void print_rev(char *s)
{
	char ch = '\0';

	while (ch != s[0])
	{
		_putchar(ch);
		ch--;
	}
	_putchar(s[0]);
	_putchar('\n');
}
