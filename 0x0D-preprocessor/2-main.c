#include <stdio.h>

/**
 * main - The program prints the name of the file it was compiled from,
 * followed by a new line
 * Return: 0 if succesful
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
