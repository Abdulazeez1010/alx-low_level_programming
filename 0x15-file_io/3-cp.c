#include "main.h"

/**
 * main - The program copies the content of a file to another file
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER];
	ssize_t bytes_read, bytes_written;
	int file_from;
	int file_to;
	mode_t file_mode;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (strcmp(argv[1], argv[2]) == 0)
	{
		dprintf(STDERR_FILENO, "Error: Input and output files are the same\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	umask(0);
	file_to = open(argv[2], O_WRONLY| O_CREAT | O_TRUNC, file_mode);
	if (file_to != -1)
		chmod(argv[2], file_mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
