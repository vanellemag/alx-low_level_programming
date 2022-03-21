#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: success
*/
void rev_string(char *s)
{
	char i = '\0';

	while (i != s[0])
	{
		_putchar(i);
		i--;
	}
	_putchar(s[0]);
}
