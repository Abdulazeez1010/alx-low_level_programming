#include "main.h"

/**
 * main - The program prints the minimum number of coinns
 * to make change for an amount of money
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	if (num % 25 == 0)
		printf("%d\n", num / 25);
	else if ((num % 25) % 10 == 0)
		printf("%d\n", num / 25 + (num % 25) / 10);
	else if (((num % 25) % 10) % 5 == 0)
		printf("%d\n", num / 25 + (num % 25) / 10 +
				((num % 25) % 10) / 5);
	else if ((((num % 25) % 10) % 5) % 2 == 0)
		printf("%d\n", num / 25 + (num % 25) / 10 +
				((num % 25) % 10) / 5 + (((num % 25) % 10) % 5) / 2);
	else
		printf("%d\n", num / 25 + (num % 25) / 10 + ((num % 25) % 10) / 5
				+ (((num % 25) % 10) % 5) / 2 +
				((((num % 25) % 10) % 5) % 2));
	return (0);
}
