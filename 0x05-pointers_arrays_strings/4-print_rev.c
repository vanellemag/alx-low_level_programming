#include "main.h"
/**
 * _strlen - prints len
 * @s: char
 * Return: succes
*/
int _strlen(char *s)
{
	int i = 0;
	char ch = s[0];

	while (ch != '\0')
	{
		i = i + 1;
		ch++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: char
 * Return: string in reverse
*/
void print_rev(char *s)
{
	int ch, i;

	ch = _strlen(s);
	i = ch - 1;
	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(s[0]);
	_putchar('\n');
}
