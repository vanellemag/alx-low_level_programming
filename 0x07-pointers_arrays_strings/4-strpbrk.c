#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: char
 * @accept: cahr
 * Return: locates the first occurrence in the string s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, n, comp;
	char *t;

	comp = 0;
	i = 0;
	while (*(s + i) != '\0' && comp == 0)
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				comp++;
				n = i;
			}
			j++;
		}
		i++;
	}
	if (comp == 1)
	{
		t = &s[n];
	}
	if (comp == 0)
	{
		return (NULL);
	}
	return (t);
}
