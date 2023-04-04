#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - The function prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: Array to print the sum of  diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum, sum2;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i * size + i];
				sum2 = sum2 + a[i * size + size - i - 1];
			}
		}
	}
	printf("%d, %d\n", sum, sum2);
}
