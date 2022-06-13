#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: char
 * @c: char
 * Return: Pointers to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i, j, comp;
	char *t;

	i = 0;
	comp = 0;
	while (*(s + i) != '\0' && (comp == 0))
	{
		if (*(s + i) == c)
		{
			comp++;
			j = i;
		}
		i++;
	}
	if (comp == 1)
	{
		t = &s[j];
	}
	if (comp == 0)
	{
		return (NULL);
	}
	return (t);
}
