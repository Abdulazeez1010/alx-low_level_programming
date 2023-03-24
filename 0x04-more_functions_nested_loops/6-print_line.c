#include "main.h"

/**
 * print_line - prints n lines
 * @n: Number of lines to be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
