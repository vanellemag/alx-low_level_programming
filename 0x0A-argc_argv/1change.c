#include <stdio.h>
#include <stdlib.h>
/**
 * search - search in array
 * @x: int
 * Return: 0 success
 */
int search(int x)
{
	int i, n, r, t;
	int tab[5] = {1, 2, 5, 10, 25};

	t = 0;
	i = 0;
	while (i < 5 && x > tab[i])
	{
		n = x / tab[i];
		if (x % tab[i] == 0)
		{
			return (n);
		}
		else
		{
			r = x % tab[i];
			t += n + search(r);
			return (t);
		}
		i++;
	}
	return (0);
}
/**
 * main - prints the minimum number of coins.
 * @argc: int
 * @argv: char
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, min, res[5];

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			res[5] = search(atoi(argv[1]));
			min = res[0];
			for (i = 1; i < 5; i++)
			{
				if (min > res[i])
				{
					min = res[i];
				}
			}
			printf("%d\n", min);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
