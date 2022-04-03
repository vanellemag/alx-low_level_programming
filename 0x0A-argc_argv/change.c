#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins.
 * @argc: int
 * @argv: char
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, min, j, n, r, v[5];

	int tab[5] = {1, 2, 5, 10, 25};

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				if ((atoi(argv[1]) > tab[i]) && atoi(argv[1]) % tab[i] == 0)
				{
					v[i] = atoi(argv[1]) / tab[i];
				}
				else
				{
					r = atoi(argv[1]) % tab[i];
					n = atoi(argv[1]) / tab[i];
					for (j = 0; j < 5; j++)
					{
						if (r == tab[j])
						{
							n = n + 1;
						}
					}
					v[i] = n;
				}
			}
			min = v[0];
			for (i = 1; i < 5; i++)
			{
				if (min > v[i])
				{
					min = v[i];
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
