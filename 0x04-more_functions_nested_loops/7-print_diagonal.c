#include "main.h"

/**
 * print_diagonal - prints diagonals
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
				_putchar(32);
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
