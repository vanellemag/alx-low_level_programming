#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c:int
 * checks for lowercase or uppercase
 * Return: 1 if c is a letter,lowercase or uppercase
*/
int _isalpha(int c)
{
	int ch, c1;

	c1 = 0;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			c1 = c1 + 1;
		}
	}
	if (c1 == 1)
	{
		return (1);
	}
	else
	{
		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			if (c == ch)
			{
				c1 = c1 + 1;
			}
		}
		if (c1 == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
