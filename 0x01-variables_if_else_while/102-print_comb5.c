#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible combinations of
 * two two digits
 * Return: returns 0
 */

int main(void)
{
	int b;

	b = 0;
	while (b <= 9)
	{
		int a;

		a = 0;
		while(a <= 9)
		{
			int i, j, k, n;

			i = 0;
			j = 0;
			k = 0;
			n = 0;
			i = b;
			while (i <= 9)
			{
				j = a;
				while (j <= 9)
				{
					while (k <= 9)
					{
						n = j + 1;
						while (n <= 9)
						{
							putchar('0' + i);
							putchar('0' + j);
							putchar(' ');
							putchar('0' + k);
							putchar('0' + n);
							if (!((i == 9) && (j == 8) && (k == 9) && (n == 9)))
							{
								putchar(',');
								putchar(' ');
								n++;
							}
							else
							{
								n++;
							}
						}
						k++;
					}
					j++;
				}
				i++;
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
