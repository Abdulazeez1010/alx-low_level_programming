#include "main.h"

/**
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned int msk = 1 << (sizeof(unsigned int) * 8 - 1);
	bool leading_zeros = true;

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
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
