#include "main.h"

/**
 * flip_bits - The function returns the number of bits
 * you would need to flip to get from one number to another
 * @n : First number
 * @m : Second number
 * Return: Returns number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int flip;
	unsigned long int msk = 1;

	flip = 0;
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((msk & n) != (msk & m))
		{
			flip++;
		}
		msk <<= 1;
	}
	return (flip);
}

