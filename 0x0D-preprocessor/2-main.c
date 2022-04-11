#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * @argc: int
 * @argv: char
 * Return: 0 success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
