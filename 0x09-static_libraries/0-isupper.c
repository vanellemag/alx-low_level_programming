#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: int
 * Return: success
*/
int _isupper(int c)
{
	int ch, comp;

	comp = 0;
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			comp = comp + 1;
		}
	}
	if (comp == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
