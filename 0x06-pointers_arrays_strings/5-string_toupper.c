#include "main.h"
/**
 * asci - returns ascii code of char
 * @c: char
 * Return: ascii code
*/
int asci(char c)
{
	return ((int)c);
}

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: char
 *Return: uppercase
 */
char *string_toupper(char *a)
{
	int i, j, t, m, l;

	t = 0;
	while (*(a + t) != '\0')
	{
		l = asci(a[t]);
		j = l;
		for (i = 97; i <= 122; i++)
		{
			if (j == i)
			{
				m =  i - 32;
				*(a + t) = (char)m;
			}
		}
		t++;
	}
	return (a);
}
