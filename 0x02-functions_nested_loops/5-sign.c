#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: int
 *function that prints the sign of a number
 *Return: 1 ,0,-1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
