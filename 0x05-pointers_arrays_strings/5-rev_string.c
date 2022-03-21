#include "main.h"
/**
 * _strlen - prints len
 * @s: char
 * Return:success
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
 * rev_string - reverse a string
 * @s: string
 * Return: success
*/
void rev_string(char *s)
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
}
