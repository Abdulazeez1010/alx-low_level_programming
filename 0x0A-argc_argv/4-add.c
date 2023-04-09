#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The function adds positive numbers
 * @argc : argument counter
 * @argv : argument vector
 * Return: Return 1 if successful, 1 if error
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
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else if (!isdigit(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
