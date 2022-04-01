#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: int
 * Description: programm does receive two arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int mul, i, j;

	if (argc == 3)
	{
		i = *argv[1];
		j = *argv[2];
		mul = i * j;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
