#include "main.h"

/**
 * main - The program adds positive integers
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum, num;
	char *endptr;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0' || argv[i] == endptr || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
