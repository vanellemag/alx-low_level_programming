#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed
 * @dest: char
 * @src: char
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int j, i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	j = 0;
	while (dest[j] != '\0')
	{
		putchar(dest[j]);
		j++;
	}
	return (dest);
}
