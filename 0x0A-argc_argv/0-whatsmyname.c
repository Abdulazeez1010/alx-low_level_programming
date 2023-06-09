#include "main.h"

/**
 * main - The program prints its name followed by a new line
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
