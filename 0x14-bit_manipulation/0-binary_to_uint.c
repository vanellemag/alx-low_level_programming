#include "main.h"
#include <math.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, sum = 0, i;

	len = strlen(b);
	i = len - 1;
	while (*b != '\0')
	{
		if (b == NULL || (*b != '0') || (*b != '1'))
		{
			return (0);
		}
		sum += (int)(*b) * pow(2, i);
		i--;
		b++;
	}
	return (sum);
}
