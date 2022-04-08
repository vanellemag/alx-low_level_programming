#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int k, i, j, l;

	k = strlen(s1);
	p = malloc(k * sizeof(char) + n * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		p = " ";
	if (s2 == NULL && s1 != NULL)
	{
		p = s1;
	}
	if (s1 == NULL && s2 != NULL)
	{
		for (i = 0; i <= n; i++)
			p[i] = s2[i];
	}
	p[i] = '\0';
	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		j = k;
		l = 0;
		while (i < k || (j < n + k) || l < n)
		{
			p[i] = s1[i];
			p[k] = s2[l];
			i++;
			k++;
			l++;
		}
		p[n + k - 1] = '\0';
	}
	return (p);
}
