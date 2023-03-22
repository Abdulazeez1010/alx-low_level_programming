#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				m = k % 10;
				l = (k - m) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + l);
				_putchar('0' + m);
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + k);
			}
		}
		_putchar('\n');

	}
}
