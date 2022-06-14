#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 *Return: String
*/
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}
	if (*s1 < *s2)
	{
		return (-15);
	}
	if (*s1 > *s2)
	{
		return (15);
	}
	return (0);
}
