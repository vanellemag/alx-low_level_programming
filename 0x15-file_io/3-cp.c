#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
/**
 * main - program that copies the content of a file
 * to another file
 * @argc: int
 * @argv: char
 * Return: success
 */
int main(int argc, char *argv[])
{
	char c;
	FILE *file1 = fopen(argv[1], "r+");
	FILE *file2 = fopen(argv[2], "w+");

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (file1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*FILE *file2 = fopen(argv[2], "w+");*/

	if (file2 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c = fgetc(file1);
	while (c != EOF)
	{
		fputc(c, file2);
		c = fgetc(file1);
	}
	fclose(file1);
	fclose(file2);
	if (fclose(file1) == EOF || fclose(file2) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close  fd EOF\n");
		exit(100);
	}
	chmod(argv[2], 664);
	return (1);
}
