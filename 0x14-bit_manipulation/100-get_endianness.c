#include "main.h"

/**
 * get_endianness - The function checks the endianness
 * Return: Returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *p = (char *)&x;

	return (*p == 1);
}

