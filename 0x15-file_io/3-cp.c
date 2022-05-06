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
	char buf[1024];
	FILE *file1 = fopen(argv[1], "r+");
	FILE *file2 = fopen(argv[2], "w+");

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	while (!feof(file1))
	{
		size_t l;

		l = fread(buf, sizeof(*buf), 1024, file1);
		if (ferror(file1))
		{
			dprintf(2, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}
		fwrite(buf, sizeof(*buf), l, file2);
		if (ferror(file2))
		{
			dprintf(2, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
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
