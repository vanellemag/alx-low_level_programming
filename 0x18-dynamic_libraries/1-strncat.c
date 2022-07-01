#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings
 * @dest: cahr
 * @src: char
 * @n: int
 * Return: string
*/
char *_strncat(char *dest, char *src, int n)
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
		while ((i < n) && (*(src + i) != '\0'))
		{
			*(dest + j + i) = src[i];
			i++;
		}
	}
	*(dest + j + i) = '\0';
	return (dest);
}
