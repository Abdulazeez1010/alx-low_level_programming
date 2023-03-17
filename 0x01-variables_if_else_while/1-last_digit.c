#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a random number
 * @n: random number
 *
 * Return: The last digit
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	} else if ((l < 6 && l != 0))
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	} else if (l = 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	return (0);
}
