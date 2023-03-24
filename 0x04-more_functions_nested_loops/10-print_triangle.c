#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle to be printed
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if (i + j < size)
				{
					_putchar(32);
				}
				if (i + j > size)
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
