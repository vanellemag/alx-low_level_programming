#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table,
 * Description: starting with 0
 * Return:success
*/
void times_table(void)
{
	int i, x, m;

	i = 0;
	while (i <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			m = x * i;
			printf("%d", m);
			printf(", ");
			x++;
		}
		printf("\n");
		i++;
	}
}
