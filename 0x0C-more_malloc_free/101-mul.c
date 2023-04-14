#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The function multiplies two positive numbers
 * @argc : argument counter
 * @argv : argument vector
 * Return: Return 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	long double prod;

	if (argc == 3)
	{
		char *endptr;
		long double n1 = strtol(argv[1], &endptr, 10);
		long double n2 = strtol(argv[2], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			exit(98);
		}
		if (n1 < 0 || n2 < 0)
		{
			return (1);
		}
		prod = n1 * n2;
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	printf("%.0Lf\n", prod);
	return (0);
}
