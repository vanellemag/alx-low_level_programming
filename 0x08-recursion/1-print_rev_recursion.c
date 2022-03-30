#include "main.h"
#include <stdio.h>
/**
 * str - return len of string
 * @c: string
 * Return: len
 */
int len(char *c)
{
	int i, ch;

	i = 0;
	ch = 0;
	while (*(c + ch) != '\0')
	{
		i++;
		ch++;
	}
	return (i);
}
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: char
 * Return: string in reverse
 */
void _print_rev_recursion(char *s)
{

}
