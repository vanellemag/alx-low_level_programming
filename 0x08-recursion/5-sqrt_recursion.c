#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: natural root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		i = 1;
		while (i < n)
		{
			if (n % i == 0)
			{
				if (n == i * i)
				{
					return (i);
				}
			}
			i++;
		}
		if (i * i != n)
		{
			return (-1);
		}
	}
	return (0);
}
