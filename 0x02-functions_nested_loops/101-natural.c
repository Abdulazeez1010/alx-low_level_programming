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
			printf("%d", i);
			if (i != 1023)
			{
				printf(", ");
			}
			sum = sum + i;
		}
	}
	printf("\n");
	printf("%d", sum);
	printf("\n");
	return (0);
}
