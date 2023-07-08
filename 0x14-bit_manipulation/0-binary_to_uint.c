#include "main.h"

/**
 * binary_to_uint - The function converts a binary number to an unsigned int
 * @b : String of binary number
 * Return: Returns the unsigned it form of the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum, power, len, result;

	if (b == NULL)
		return (0);
	len = strlen(b);
	sum = 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			sum += 0;
		else if (b[i] == '1')
		{
			power = len - 1 - i;
			result = 1;
			while (power != 0)
			{
				result *= 2;
				--power;
			}
			sum += result;
		}
		else
		{
			sum = 0;
			return (0);
		}
	}
	return (sum);
}

