#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible combinations of
 * two two digit numbers
 * Return: returns 0
 */
int main(void)
{
	int i, j, m, n;
	i = 0;
	j = 0;
	m = 0;
	n = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
		
			while (m <= 9)
				{
					n =  j + 1;
					while (n <= 9)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + m);
						putchar('0' + n);
						putchar(',');
						putchar(' ');
						n++;

					}
					m++;
				}
				j++;
                }
		i++;
		m = i;
	}
	putchar('\n');

	return (0);
}
