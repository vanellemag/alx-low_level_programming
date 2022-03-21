#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: string
 * Return: string
*/
void _puts(char *str)
{
	int ch;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
}
