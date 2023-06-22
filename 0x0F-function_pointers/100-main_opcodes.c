#include <stdio.h>
#include <stdlib.h>

/**
 * main - THe program prints the opcodes of its own main function
 * @argc : Argument count
 * @argv : Argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	size_t i, num_bytes;
	unsigned char *op_codes = (unsigned char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < num_bytes; i++)
		printf("%02x ", op_codes[i]);
	printf("\n");
	return (0);
}
