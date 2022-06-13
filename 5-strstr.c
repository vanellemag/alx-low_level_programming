#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: char
 * @needle: char
 * Return: pointer to the beginning to the locates substring or Null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n, comp;
	char *t;

	comp = 0;
	i = 0;
	while (*(needle + i) != '\0' && comp == 0)
	{
		j = 0;
		while (*(haystack + j) != '\0')
		{
			if (*(needle + i) == *(haystack + j))
			{
				comp++;
				n = j;
			}
			j++;
		}
		i++;
	}
	if (comp == 1)
	{
		t = &haystack[n];
	}
	if (comp == 0)
	{
		return (NULL);
	}
	return (t);
}
