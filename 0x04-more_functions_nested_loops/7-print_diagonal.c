#include "main.h"

/**
 * print_diagonal - prints diagonals
 * @n: Number of diagonals to be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i != j)
				{
					_putchar(32);
				}
				if (i == j)
				{
					_putchar(92);
					break;
				}
			}
			_putchar('\n');
		}
	}
}
