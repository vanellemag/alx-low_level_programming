#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit
 *@n: int
 * prints last digit
 * Return: success
*/
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	printf("%d %d", c, c);
}
