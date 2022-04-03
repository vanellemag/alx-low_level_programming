#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: int
 * @argv: char
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int j, sum, comp;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		comp = 1;
		j = 1;
		while (j < argc)
		{
			if (atoi(argv[j]))
			{
				comp++;
				sum +=  atoi(argv[j]);
			}
			j++;
		}
		if (comp == argc)
		{
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
