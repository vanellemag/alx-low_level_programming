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
	int i, min, j, n, r, tab[5][1];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 5;
	tab[3] = 10;
	tab[4] = 25;
	if (argc == 2)
	{
		if (argv[1] < 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (*argv[1] % *tab[i] == 0)
				{
					tab[i][0] = argv[1] / tab[i];
				}
				else
				{
					r = argv[1] % tab[i];
					n = argv[1] / tab[i];
					for (j = 0; j < 5; j++)
					{
						if (r == tab[j])
						{
							n = n + 1;
						}
					}
					tab[i][0] = n;
				}
			}
			min = tab[0][0];
			for (i = 1; i < 5; i++)
			{
				if (min > tab[i][0])
				{
					min = tab[i][0];
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