#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints positive or negative number
 * @n: number
 *
 * Return: Number is positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check if n is positive or negative*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
