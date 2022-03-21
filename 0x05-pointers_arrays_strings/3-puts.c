#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: string
 * Return: string
*/
void _puts(char *str)
{
	int ch = str[0];

	while (ch != '\0')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
