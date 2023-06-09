#include "main.h"

/**
 * main - The program multiplies two numbers
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful, 1 if Error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
