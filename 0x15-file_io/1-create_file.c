#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: content to be written in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int h = 0, open_file, write_file;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (h = 0; text_content[h];)
			h++;
	}

	open_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write_file = write(open_file, text_content, h);

	if (open_file == -1 || write_file == -1)
		return (-1);
	else
	{
		close(open_file);
		return (1);
	}
}
