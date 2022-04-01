#include <stdio.h>
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
	comp = 1;
	if (argc == 1)
	{
		printf("0\n");
	}
	for (j = 1; j < argc; j++)
	{
		if (sizeof(*argv[j]) == sizeof(int))
		{
			comp++;
		}
		sum = sum + *argv[j];
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
	return (0);
}
