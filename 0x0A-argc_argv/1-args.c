#include <stdio.h>

/**
 * main - The function prints the number of arguments passed into it
 * @argc : argument count
 * @argv : argument vector
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
