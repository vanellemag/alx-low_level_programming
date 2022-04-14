#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers
 * @separator: char
 * @n: nsigned int
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, j, m;
	va_list ap;

	va_start(ap, n);
	j = n;
	i = 0;
	while (i < j)
	{
		m = va_arg(ap, int);
		if (separator != NULL)
			printf("%d%s ", m, separator);
		else
			printf("%d ", m);
		i++;
	}
	va_end(ap);
	printf("\n");
}
