#include "main.h"

/**
 * get_bit - The function returns the value of a bit at a given index
 * @n : The number
 * @index : The index to return the value of the bit
 * Return: Returns the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val;
	unsigned long int msk = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (msk & n)
		val = 1;
	else
		val = 0;
	return (val);
}
