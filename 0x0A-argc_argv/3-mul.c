#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function multiplies two numbers
 * @argc : argument count
 * @argv : argument vector
 * Return: 0 is successful
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
