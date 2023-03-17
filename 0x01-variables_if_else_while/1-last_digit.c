#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a random number
 * @n: random number
 * @l: Last digit of number
 *
 * Return: The last digit
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 0)
	{
		l = l;
	} else if (l < 0)
	{
		l = -l;
	}
	if (l > 5)
	{
		printf("Last digit of %d and is %d and is greater than 5\n", n, l);
	} else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	} else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0", n, l);
	}
	return (0);
}
