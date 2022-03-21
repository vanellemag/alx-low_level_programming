#include "main.h"
/**
 * _strlen - print len
 * @s: char
 * Return: success
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
 * puts_half - prints half of a string, followed by a new line
 * @str: char
 * Return: half of a string
*/
void puts_half(char *str)
{
	int n, i;

	i = _strlen(str);
	n = (i - 1) / 2;
	if (i % 2 == 0)
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
