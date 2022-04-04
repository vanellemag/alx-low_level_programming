#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *con;

	len1 = strlen(s1);
	len2 = strlen(s2);
	con = malloc((len1 * sizeof(s1)) + (len2 * sizeof(s2)));
	if (con == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		con = " ";
	}
	else
	{
		i = 0;
		while (i < len1)
		{
			con[i] = s1[i];
			i++;
		}
		j = len1;
		while (j < len2)
		{
			con[j] = s2[j];
			j++;
		}
		con[j] = '\0';
	}
	return (con);
}
