#include "main.h"

/**
 * read_textfile - function that reads a text and prints it
 * @filename: file to open, read and write
 * @letters: number of letters to read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
		free(buffer);
	}

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (open_file == -1)
	{
		return (0);
		free(buffer);
	}
	else if (read_file == -1)
	{
		return (0);
		free(buffer);
	}
	else if (write_file == -1)
	{
		return (0);
		free(buffer);
	}
	else
	{
		free(buffer);
		close(open_file);
	}
	return (write_file);
}
