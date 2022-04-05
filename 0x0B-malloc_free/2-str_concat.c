#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
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
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		con = " ";
	if ((s1 == NULL) && s2 != NULL)
	{
		for (j = 0; j < len2; j++)
			con[j] = s2[j];
	}
	else
	{
		for (i = 0; i < len1; i++)
			con[i] = s1[i];
	}
	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		j = len1;
		while (i < len1 && j < len2)
		{
			con[i] = s1[i];
			con[j] = s2[j];
			i++;
			j++;
		}
	}
	con[j] = '\0';
	return (con);
}
