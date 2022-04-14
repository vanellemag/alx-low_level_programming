#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: char
 * @n: unsigned int
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, j;
	char *m;
	va_list ap;

	va_start(ap, n);
	j = n;
	i = 0;
	while (i < j)
	{
		m = va_arg(ap, char*);
		if (separator != NULL && m != NULL)
			printf("%s %s ", m, separator);
		if (separator != NULL && m == NULL)
			printf("nil %s ", separator);
		if (separator == NULL && m == NULL)
			printf("nil ");
		if (separator == NULL && m != NULL)
			printf("%s ", m);
		i++;
	}
	va_end(ap);
	printf("\n");
}
