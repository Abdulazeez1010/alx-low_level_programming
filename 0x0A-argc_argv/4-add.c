#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The function adds positive numbers
 * @argc : argument counter
 * @argv : argument vector
 * Return: Return 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("0\n");
	}

	if (argc > 2)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			char *endptr;
			long n = strtol(argv[i], &endptr, 10);

			if (*endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			if (n < 0)
			{
				return (1);
			}
			sum += n;
		}
		printf("%d\n", sum);
	}
	return (0);
}
