#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0 if succesful
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != 1))
			n = n / i;
	}
	printf("%lu\n", n);

	return (0);
}
