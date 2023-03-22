#include <stdio.h>

/**
 * main - prints multiples of 3 and 5
 * Return: returns sum
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
