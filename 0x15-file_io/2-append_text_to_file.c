#include <stdio.h>
/**
 * append_text_to_file - appends text at the end
 * @filename: char
 * @text_content: char
 * Return: 1 success and -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "r + a");
	char *c = text_content;

	if (filename == NULL)
		return (-1);
	if (file == NULL)
	{
		return (-1);
	}
	else
	{
		while (c != NULL)
		{
			fputc(*c, file);
			c++;
		}
	}
	return (1);
}
