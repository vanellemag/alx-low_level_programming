#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return:on success 1.
 * on error, -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
/**
 * main - noting
 * Description: noting
 *
 * Return : 0 success
*/int main(void)
{
	/*main*/
	return (0);
}
