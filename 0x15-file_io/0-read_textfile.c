#include "main.h"

/**
 * read_textfile - The function reads a text file and prints it
 * to the POSIX standard output
 * @filename : The name of the file
 * @letters : Number of letters to be read
 * Return: Returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char*) * letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bytes_written);
}
