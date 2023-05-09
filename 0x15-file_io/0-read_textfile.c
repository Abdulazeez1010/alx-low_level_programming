#include "main.h"

/**
 * read_textfile - The function reads a text file
 * and prints it to the POSIX standard output
 * @filename : The file to read
 * @letters : The number of letters it should read and print
 * Return: Number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd = fopen(filename, "r");
	size_t bytes_read;
	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
		return (0);
	if (fd == NULL)
		return (0);

	bytes_read = fread(buffer, sizeof(char), letters, fd);
	if (bytes_read == 0)
		return (0);
	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	fclose(fd);
	free(buffer);
	return (bytes_read);
}
