#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c:int
 * Description:check lowercase character
 *
 * Return:1 if c is lowercase, 0 else
*/
int _islower(int c)
{
	int ch, compt;

	compt = 0;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			compt = compt + 1;
		}
	}
	if (compt == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
