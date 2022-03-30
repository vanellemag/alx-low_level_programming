#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: char
 * Return:string
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(&s[i]);
	}
	_putchar('\n');
}
