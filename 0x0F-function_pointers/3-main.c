#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - print result
 * @argc: int
 * @argv: char
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	char *d, *m;

	d = "/";
	m = "%";
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == d || (argv[2] == m)) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	return (0);
}
