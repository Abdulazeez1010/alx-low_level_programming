#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function prints the minimum number of coins
 * to make change for an amount of money
 * @argc : argument counter
 * @argv : argument vector
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n = atoi(argv[1]);

		if (n < 0)
		{
			printf("0\n");
		}
		else
		{
			if (n % 25 == 0)
				printf("%d\n", n / 25);
			else if ((n % 25) % 10 == 0)
				printf("%d\n", n / 25 + (n % 25) / 10);
			else if ((n % 25) % 5 == 0)
				printf("%d\n", n / 25 + (n % 25) / 10 +
						((n % 25) % 10) / 5);
			else if ((n % 25) % 2 == 0)
				printf("%d\n", n / 25 + (n % 25) / 10 + ((n % 25) % 10) / 5 +
						(((n % 25) % 10) % 5) / 2);
			else if ((n % 25) % 1 == 0)
				printf("%d\n", n / 25 + (n % 25) / 10 + ((n % 25) % 10) / 5 +
						(((n % 25) % 10) % 5) / 2 + ((((n % 25) % 10) % 5) % 2));
		}
	}
	return (0);
}
