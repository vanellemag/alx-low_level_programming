#include "main.h"
/**
 * asci - return ascii code of char
 * @c: char
 * Return: ascii code
*/
int asci(char c)
{
	return ((int)c);
}

/**
 * *cap_string - capitalizes all words of a string
 * @a: char
 * Return: uppercase
*/
char *cap_string(char *a)
{
	int i, j, t, m, l;

	t = 0;
	while (*(a + t) != '\0')
	{
		if (*(a + t) == ' ' || *(a + t) == '\t' || *(a + t) == '\n')
		{
			l = asci(a[t + 1]);
			j = l;
			for (i = 97; i <= 122; i++)
			{
				if (j == i)
				{
					m = i - 32;
					*(a + t + 1) = (char)m;
				}
			}
		}
		if (*(a + t) == ',' || *(a + t) == ';' || *(a + t) == '.' || *(a + t) == '!')
		{
			l = asci(a[t + 1]);
			j = l;
			for (i = 97; i <= 122; i++)
			{
				if (j == i)
				{
					m = i - 32;
					*(a + t + 1) = (char)m;
				}
			}
		}
		if (*(a + t) == '?' || *(a + t) == '"' || *(a + t) == '(')
		{
			l = asci(a[t + 1]);
			j = l;
			for (i = 97; i <= 122; i++)
			{
				if (j == i)
				{
					m = i - 32;
					*(a + t + 1) = (char)m;
				}
			}
		}
		if (*(a + t) == ')' || *(a + t) == '{' || *(a + t) == '}')
		{
			l = asci(a[t + 1]);
			j = l;
			for (i = 97; i <= 122; i++)
			{
				if (j == i)
				{
					m = i - 32;
					*(a + t + 1) = (char)m;
				}
			}
		}
		t++;
	}
	return (a);
}
