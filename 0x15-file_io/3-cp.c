#include "main.h"

/**
 * main -copy content from one file to another
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int from_file, to_file;
	ssize_t read_file = 1024, write_file, close_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp from_file to_file\n");
		exit(97);
	}
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (read_file == 1024)
	{
		read_file = read(from_file, buffer, 1024);
		write_file = write(to_file, buffer, read_file);
		if (read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file = close(from_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n",
				from_file);
		exit(100);
	}
	close_file = close(to_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				to_file);
		exit(100);
	}
	return (0);
}
