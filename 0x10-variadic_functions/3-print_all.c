#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - prints anything
 * @format: char
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *m;

	va_start(ap, format);
	j = strlen(format);
	i = 0;
	while (i < j)
	{
		m = va_arg(ap, char *);
		if (m == NULL)
			printf("nil");
		if (m != NULL)
			_putchar(*m);
		i++;
	}
	printf("\n");
}
