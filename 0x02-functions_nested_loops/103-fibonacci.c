#include <stdio.h>
/**
 * fibonacci - print fibonacci number
 * @n: int
 * Return: int
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
 * main - prints the sum of the fibonacci sequence
 * the sum of the even-valued terms
 * Return: 0 success
*/
int main(void)
{
	int j, m, s;

	s = 0;
	j = 1;
	while (fibonacci(j) < 400000)
	{
		m = fibonacci(j);
		if (m % 2 == 0)
			s = s + m;
		j++;
	}
	printf("%d\n", s);
	return (0);
}
