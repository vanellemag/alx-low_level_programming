#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: char
 * Return: a pointer to a new string which is a duplicate of the string
 */
char *_strdup(char *str)
{
	char *cp, *c;
	int i, len;

	len = strlen(str);
	cp = malloc((len + 1) * sizeof(char));
	c = "NULL";
	if (str == c)
	{
		return (NULL);
	}
	if (cp == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cp[i] = str[i];
			i++;
		}
		cp[i] = '\0';
	}
	return (cp);
}
