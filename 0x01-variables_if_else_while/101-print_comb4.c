#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible different combinations of
 * three digits
 * Return: returns 0
 */
int main(void)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j +1;
			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
					k++;
				}
				else
				{
					k++;
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
