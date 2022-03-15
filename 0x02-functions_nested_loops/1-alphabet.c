#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * print alphabet
 * return: alphabet
*/
void print_alphabet(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar (ch);
		ch++;
	}
	_putchar ('\n');
}
