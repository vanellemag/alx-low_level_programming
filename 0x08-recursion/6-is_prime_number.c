#include "main.h"
/**
 * is_prime_number - prime number
 * @n: int
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int i, comp;

	comp = 0;
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			comp++;
		}
		i++;
	}
	if (comp == 2)
	{
		return (1);
	}
	else
		return (0);
}
