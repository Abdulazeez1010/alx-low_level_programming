#include "main.h"

/**
 * main - The program copies the content of a file to another file
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	int file_from = open(argv[1], O_RDONLY);
	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		}
		if (bytes_written != bytes_read)
		{
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		exit(98);
	}
	close(file_from);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close(file_to);
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
