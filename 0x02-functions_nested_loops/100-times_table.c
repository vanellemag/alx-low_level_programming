#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times table
 * @n:int
 * starting with 0
 * Return: 0 success
*/
void print_times_table(int n)
{
	int i, j, s;

	if (n < 0 || n > 15)
	{
		printf(" ");
	}
	else
	{
		i = 0;
		while (i < n + 1)
		{
			j = 0;
			while (j < n + 1)
			{
				s = i * j;
				printf("%d, ", s);
				j++;
			}
			printf("\n");
			i++;
		}

	}

}
