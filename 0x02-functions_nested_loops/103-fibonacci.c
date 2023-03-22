#include <stdio.h>

/**
 * main - prints sum of even fibonacci less than 4000000
 * Return: return 0 is successful
 */
int main(void)
{
	unsigned long int i, j, k, sum, even_sum;

	j = 0;
	k = 1;
	sum = 0;
	even_sum = 0;
	for (i = 0; i < 50; i++)
	{
		sum = j + k;
		j = k;
		k = sum;
		if (sum >= 4000000)
			break;
		if (sum % 2 == 0)
			even_sum = even_sum + sum;
	}
	printf("%lu", even_sum);
	printf("\n");
	return (0);
}
