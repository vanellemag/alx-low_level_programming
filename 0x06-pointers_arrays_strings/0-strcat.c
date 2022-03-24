#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenate two strings
 * @dest: char
 * @src: char
 * Return: string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (*(dest + j) != '\0')
	{
		j++;
	}
	if (*(dest + j) == '\0')
	{
		i = 0;
		while (*(src + i) != '\0')
		{
			*(dest + j + i) = *(src + i);
			i++;
		}
		*(dest + j + i) = '\0';
	}
	return (dest);
}
