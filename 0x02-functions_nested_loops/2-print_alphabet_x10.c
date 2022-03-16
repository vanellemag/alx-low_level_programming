#include "main.h"
/**
 * print_alphabet_x10 - print ten time the alphabet
 * Description: in lowercase
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int ch, l;

	l = 1;
	while (l <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar (ch);
			ch++;
		}
		_putchar ('\n');
		l++;
	}
}
