#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: unsigned int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i, j;

	if (n == 0)
		return (0);
	sum = 0;
	j = n;
	i = 0;
	va_start(ap, n);
	while (i < j)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
