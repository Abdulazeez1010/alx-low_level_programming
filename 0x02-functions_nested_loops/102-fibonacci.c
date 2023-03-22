#include <stdio.h>

/**
 * main - prints first 50 Fibonacci series
 * Return: returns 0 if successful
 */
int main(void)
{
	int i, j, k, sum;

	j = 0;
	k = 1;
	for (i = 0; i < 50; i++)
	{
		sum = j + k;
		j = k;
		k = sum;
		printf("%d", sum);
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
