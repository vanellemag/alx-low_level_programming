#include "main.h"
#include <stdio.h>
/**
 * fibonacci - print fibonaci number
 * @n:int
 * Return: success
*/
int fibonacci(int n)
{
	int a, b, c, i;

	if (n == 1)
	{
		return (1);
	}
	else
	{
		a = 1;
		b = 1;
		for (i = 2; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return (c);
	}
}
/**
 * main - print first 50 fibonacci numbers
 * Starting with 1 and 2
 * Return: 0 success
*/
int main(void)
{
	int j;

	j = 1;
	while (j <= 50)
	{
		printf("%d, ", fibonacci(j));
		j++;
	}
	printf("\n");
	return (0);
}
