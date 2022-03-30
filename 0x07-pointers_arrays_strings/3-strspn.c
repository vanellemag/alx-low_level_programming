#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: char
 * @accept: char
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int comp, i, j;

	i = 0;
	comp = 0;
	while (*(s + i) != '\0' || (*(s + i) != ' ') || (*(s + i) != ','))
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				comp++;
			}
			j++;
		}
		i++;
	}
	return (comp);
}
