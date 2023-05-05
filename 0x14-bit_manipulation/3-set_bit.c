#include "main.h"

/**
 * set_bit - The function sets the value of a bit to 1 at a given index
 * @n : The number
 * @index : The index to set bit to 1
 * Return: Returns 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = msk | *n;
	return (1);
}
