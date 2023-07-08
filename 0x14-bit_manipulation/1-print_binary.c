#include "main.h"

/**
 * print_binary - The function prints the binary representation of a number
 * @n : The number to print its binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int msk = 1UL << (sizeof(unsigned long int) * 8 - 1);
	bool leading_zeros = true;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (n & msk)
		{
			_putchar('1');
			leading_zeros = false;
		}
		else if (!leading_zeros)
			_putchar('0');
		msk >>= 1;
	}
	if (leading_zeros)
		_putchar('0');
}

