#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: char
 * Return: half of a string
*/
void puts_half(char *str)
{
	int n;

	n = (_strlen(str) - 1) / 2;
	if ((_strlen(str)) % 2 == 0)
	{
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = n + 1;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
}
