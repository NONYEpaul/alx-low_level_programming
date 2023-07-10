#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to input
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
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
	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, h);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);
	return (1);
}
