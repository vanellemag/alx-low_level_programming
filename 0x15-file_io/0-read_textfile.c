#include <stdio.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints in to the POSIX
 * standard output.
 * @filename: char
 * @letters: size_t
 * Return: number of letters printed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char c;
	int let = 0;

	file = fopen(filename, "rt+");
	if (filename == NULL)
		return (0);
	if (file == NULL)
	{
		return (0);
	}
	else
	{
		while ((letters > 0) && ((c = fgetc(file)) != EOF))
		{
			printf("%c", c);
			let++;
			letters--;
		}
		if (fgetc(file) == EOF)
		{
			return (0);
		}
	}
	fclose(file);
	return (let);
}
