#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: length
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
