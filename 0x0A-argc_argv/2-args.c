#include "main.h"

/**
 * main - The program all the arguments it recieves
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
