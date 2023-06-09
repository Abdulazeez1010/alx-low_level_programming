#include "main.h"

/**
 * main - The program prints the number of arguments passed into it
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
