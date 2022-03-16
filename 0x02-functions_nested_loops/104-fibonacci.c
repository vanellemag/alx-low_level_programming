#include <stdio.h>
/**
 * fibonacci - print Fibonacci numbers
 * @n:int
 * Return:success
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
 * main - prints 98 Fibonacci numbers
 * Starting with 1 and 2
 * Return: 0 success
*/
int main(void)
{
	int comp, i;

	i = 1;
	comp = 1;
	while (comp <= 98 && i <= 500)
	{
		printf("%d, ", fibonacci(i));
		i++;
		comp++;
	}
	printf("\n");
	return (0);
}
