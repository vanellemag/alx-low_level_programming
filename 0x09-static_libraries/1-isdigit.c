#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: int
 * Return: 0 is c is a digit or 1
*/
int _isdigit(int c)
{
	int ch, comp;

	comp = 0;
	for (ch = 0; ch <= 9; ch++)
	{
		if (ch == c)
		{
			comp++;
		}
	}
	if (comp == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
