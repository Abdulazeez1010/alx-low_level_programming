#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 * Return: return 0 is successful
 */
int main(void)
{
	unsigned long int i, j, k, sum;

	j = 0;
	k = 1;
	sum = 0;
	for (i = 0; i < 98; i++)
	{
		sum = j + k;
		j = k;
		k = sum;
		printf("%lu", sum);
		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
