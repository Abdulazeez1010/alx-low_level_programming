#include "main.h"

/**
 * main - The program multiplies two positive numbers
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	long int product;

	if (argc == 3)
	{
		char *endptr;
		long int n1 = strtol(argv[1], &endptr, 10);
		long int n2 = strtol(argv[2], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			exit(98);
		}
		if (n1 < 0 || n2 < 0)
			return (1);
		product = n1 * n2;
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	printf("%ld\n", product);
	return (0);
}
