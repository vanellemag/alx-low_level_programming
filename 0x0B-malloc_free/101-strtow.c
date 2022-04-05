#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**i
 * **strtow - splits a string into words
 * @str: char
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, len;
	char **ar, *t, *c;

	len = strlen(str);
	ar = malloc(sizeof(char));
	 t = " ";
	 c = "NULL";
	if (str == NULL || str == t)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if ((str[i] == *t) && (str[i + 1] == *t))
			i++;
		if (str[i] != *t)
			*ar[i] = str[i];
		if (i != 0 && (str[i - 1] != *t) && str[i] == *t)
			ar[i] = '\0';
		i++;
	}
	ar[i] = c;
	return (ar);
}
