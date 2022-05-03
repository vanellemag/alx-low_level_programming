#include <stdio.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @filename: char
 * @text_content: char
 * Return: 1 success or -1 faillure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "w+");
	char *ch = text_content;

	if (filename == NULL)
		return (-1);
	if (file == NULL)
	{
		return (-1);
	}
	else
	{
		if (text_content != NULL)
		{
			while (ch != NULL)
			{
				fputc(*ch, file);
				ch++;
			}
		}
	}
	fclose(file);
	chmod(filename, 600);
	return (1);
}
